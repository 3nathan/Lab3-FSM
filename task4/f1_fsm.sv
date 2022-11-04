module f1_fsm #(
    parameter   WIDTH = 8
)(
    input   logic               clk,            // clock
    input   logic               rst,            // reset
    input   logic               en,             // enable
    input   logic               trigger,        // trigger
    output  logic [WIDTH-1:0]   data_out,       // data out
    output  logic               cmd_seq,        // high when data_out goes from 1 to 11111111
    output  logic               cmd_delay       // triggers the start of the delay.sv component
);

    // Define our states
    typedef enum logic [8:0] {S0, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
    my_state current_state, next_state;

    // state registers
    always_ff @(posedge clk, posedge rst)
        if (rst)        current_state <= S0;
        else            current_state <= next_state;

    // next state logic
    always_comb
        case (current_state)
            S0:     if (trigger)        next_state = S1;
                    else                next_state = current_state;
            S1:     if (en)             next_state = S2;
                    else                next_state = current_state;
            S2:     if (en)             next_state = S3;
                    else                next_state = current_state;
            S3:     if (en)             next_state = S4;
                    else                next_state = current_state;
            S4:     if (en)             next_state = S5;
                    else                next_state = current_state;
            S5:     if (en)             next_state = S6;
                    else                next_state = current_state;
            S6:     if (en)             next_state = S7;
                    else                next_state = current_state;
            S7:     if (en)             next_state = S8;
                    else                next_state = current_state;
            S8:     if (en)             next_state = S0;
                    else                next_state = current_state;
            default:                    next_state = S0;
        endcase
    
    // output logic
    always @(posedge clk, posedge rst)
        begin
            if          (current_state == S0)   assign data_out  = 8'b0;
            else if     (current_state == S1)   assign data_out  = 8'b1;
            else if     (current_state == S2)   assign data_out  = 8'b11;
            else if     (current_state == S3)   assign data_out  = 8'b111;
            else if     (current_state == S4)   assign data_out  = 8'b1111;
            else if     (current_state == S5)   assign data_out  = 8'b11111;
            else if     (current_state == S6)   assign data_out  = 8'b111111;
            else if     (current_state == S7)   assign data_out  = 8'b1111111;
            else if     (current_state == S8)   assign data_out  = 8'b11111111;
            else                                assign data_out  = 8'b0;
            if          (current_state == S0)   assign cmd_seq   = 0;
            else                                assign cmd_seq   = 1;
            if          (current_state == S8)   assign cmd_delay = 1;
            else                                assign cmd_delay = 0;
            //assign cmd_seq = 1;
            //assign cmd_delay = 0;
        end
endmodule
