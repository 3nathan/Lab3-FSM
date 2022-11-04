module mux (
    input   logic           a,      // 1st input
    input   logic           b,      // 2nd input
    input   logic           s,      // select
    output  logic           o       // output
);

    assign  o = ~o & a | 0 & b;

endmodule
