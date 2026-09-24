`timescale 1ns / 1ps

module tt_um_eight_bit_counter_tb;

  // Wire up the inputs and outputs:
  reg clk;
  reg rst_n;
  reg ena;
  reg [7:0] ui_in;
  reg [7:0] uio_in;
  wire [7:0] uo_out;
  wire [7:0] uio_out;
  wire [7:0] uio_oe;
`ifdef GL_TEST
  wire VPWR = 1'b1;
  wire VGND = 1'b0;
`endif

  // Replace tt_um_example with your module name:
  tt_um_eight_bit_counter user_project (

      // Include power ports for the Gate Level test:
`ifdef GL_TEST
      .VPWR(VPWR),
      .VGND(VGND),
`endif

      .ui_in  (ui_in),    // Dedicated inputs
      .uo_out (uo_out),   // Dedicated outputs
      .uio_in (uio_in),   // IOs: Input path
      .uio_out(uio_out),  // IOs: Output path
      .uio_oe (uio_oe),   // IOs: Enable path (active high: 0=input, 1=output)
      .ena    (ena),      // enable - goes high when design is selected
      .clk    (clk),      // clock
      .rst_n  (rst_n)     // not reset
  );

    initial begin
        rst_n <= 0;
        #1
        rst_n <= 1;
        #62
        rst_n <= 0;
        #5
        rst_n <= 1;
    end

    initial begin
        uio_in <= 8'b0000000;
        #22
        uio_in <= 8'b0000001;
        #20
        uio_in <= 8'b000000;
    end

    initial begin
        ena <= 0;
        #7
        ena <= 1;
    end

    initial begin
        ui_in <= 0;
        #12
        ui_in <= 8'b0000101;
    end

endmodule