module clktick #(
	parameter N_WIDTH = 16,
            D_WIDTH = 8
)(
  // interface signals
  input  logic                clk,      // clock 
  input  logic                rst,      // reset
  input  logic                en,       // enable signal
  input  logic [N_WIDTH-1:0]  N,     	  // clock divided by N+1
  output logic [D_WIDTH-1:0]  data_out  // tick output
);

logic [N_WIDTH-1:0] count;
logic               tick;

always_ff @ (posedge clk)
    if (rst) begin
        tick <= 1'b0;
        count <= N;  
        end
    else if (en) begin
	    if (count == 0) begin
		    tick <= 1'b1;
		    count <= N;
	        end
	    else begin
		    tick <= 1'b0;
		    count <= count - 1'b1;
	        end
        end
        
endmodule
