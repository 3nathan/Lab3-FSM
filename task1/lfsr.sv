module lfsr (
    input   logic           clk,        // clock
    input   logic           rst,        // reset
    input   logic           en,         // enable
    output  logic [6:0]     data_out    // pseudo-random output
);

logic [3:0] sreg;

always_ff @ (posedge clk, posedge rst)
    if (en)
        sreg <= {sreg[2:0], sreg[3] ^ sreg[2]};
    else if (rst)
        sreg <= 4'b1;

assign data_out = sreg;
endmodule
