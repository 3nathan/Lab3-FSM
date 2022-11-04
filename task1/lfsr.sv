module lfsr (
    input   logic           clk,        // clock
    input   logic           rst,        // reset
    input   logic           en,         // enable
    output  logic [6:0]     data_out    // pseudo-random output
);

logic [6:0] sreg;

always_ff @ (posedge clk, posedge rst)
    if (en)
        sreg <= {sreg[5:0], sreg[6] ^ sreg[2]};     // implementing primitive polynomial 1+X^3+1^7
    else if (rst)
        sreg <= 7'b1;

assign data_out = sreg;
endmodule
