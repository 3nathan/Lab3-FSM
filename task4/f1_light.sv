module top (
    input   logic               clk,        // clock
    input   logic               rst,        // reset
    input   logic               trigger,    // trigger from vbdFlag()
    input   logic [4:0]         n,          // clock divide amount
    output  logic [7:0]   data_out    // data out
);

    logic               cmd_seq;    // command sequence
    logic               cmd_delay;  // command delay
    logic               mux_a;      // multiplexer input a wire
    logic               mux_b;      // multiplexer input b wire
    logic               mux_o;      // multiplexer output wire
    logic               clktick_o;  // clock tick output wire
    logic               time_out;   // delay output wire
    logic [6:0]         k;          // linear feedback shift register output wire

lfsr  myLfsr (
    .clk        (clk),
    .rst        (rst),
    .en         (1),
    .data_out   (k)
);

clktick myClktick (
    .clk        (clk),
    .rst        (rst),
    .en         (cmd_seq),
    .N          (n),
    .data_out   (mux_b)
);

delay myDelay (
    .clk        (clk),
    .rst        (rst),
    .trigger    (cmd_delay),
    .n          (k),
    .time_out   (mux_a)
);

mux myMux (
    .a          (mux_a),
    .b          (mux_b),
    .s          (cmd_seq),
    .o          (mux_o)
);

f1_fsm myFiniteStateMachine (
    .clk        (clk),
    .rst        (rst),
    .en         (mux_o),
    .trigger    (trigger),
    .data_out   (data_out),
    .cmd_seq    (cmd_seq),
    .cmd_delay  (cmd_delay)
);

endmodule
