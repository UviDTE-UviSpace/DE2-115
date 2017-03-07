  //Example instantiation for system 'DE2_115_SOPC'
  DE2_115_SOPC DE2_115_SOPC_inst
    (
      .LCD_E_from_the_lcd                               (LCD_E_from_the_lcd),
      .LCD_RS_from_the_lcd                              (LCD_RS_from_the_lcd),
      .LCD_RW_from_the_lcd                              (LCD_RW_from_the_lcd),
      .LCD_data_to_and_from_the_lcd                     (LCD_data_to_and_from_the_lcd),
      .SRAM_ADDR_from_the_sram                          (SRAM_ADDR_from_the_sram),
      .SRAM_CE_n_from_the_sram                          (SRAM_CE_n_from_the_sram),
      .SRAM_DQ_to_and_from_the_sram                     (SRAM_DQ_to_and_from_the_sram),
      .SRAM_LB_n_from_the_sram                          (SRAM_LB_n_from_the_sram),
      .SRAM_OE_n_from_the_sram                          (SRAM_OE_n_from_the_sram),
      .SRAM_UB_n_from_the_sram                          (SRAM_UB_n_from_the_sram),
      .SRAM_WE_n_from_the_sram                          (SRAM_WE_n_from_the_sram),
      .address_to_the_ext_flash                         (address_to_the_ext_flash),
      .altpll_24                                        (altpll_24),
      .altpll_25                                        (altpll_25),
      .altpll_io                                        (altpll_io),
      .altpll_sdram                                     (altpll_sdram),
      .altpll_sys                                       (altpll_sys),
      .avs_export_blue_threshold_max_from_the_sensor    (avs_export_blue_threshold_max_from_the_sensor),
      .avs_export_blue_threshold_min_from_the_sensor    (avs_export_blue_threshold_min_from_the_sensor),
      .avs_export_capture_configure_from_the_camera     (avs_export_capture_configure_from_the_camera),
      .avs_export_capture_done_to_the_camera            (avs_export_capture_done_to_the_camera),
      .avs_export_capture_read_from_the_camera          (avs_export_capture_read_from_the_camera),
      .avs_export_capture_readdata_to_the_camera        (avs_export_capture_readdata_to_the_camera),
      .avs_export_capture_ready_to_the_camera           (avs_export_capture_ready_to_the_camera),
      .avs_export_capture_select_output_from_the_camera (avs_export_capture_select_output_from_the_camera),
      .avs_export_capture_select_vga_from_the_camera    (avs_export_capture_select_vga_from_the_camera),
      .avs_export_capture_start_from_the_camera         (avs_export_capture_start_from_the_camera),
      .avs_export_clk_from_the_camera                   (avs_export_clk_from_the_camera),
      .avs_export_clock_to_the_tracker_0                (avs_export_clock_to_the_tracker_0),
      .avs_export_clock_to_the_tracker_1                (avs_export_clock_to_the_tracker_1),
      .avs_export_clock_to_the_tracker_2                (avs_export_clock_to_the_tracker_2),
      .avs_export_clock_to_the_tracker_3                (avs_export_clock_to_the_tracker_3),
      .avs_export_clock_to_the_tracker_4                (avs_export_clock_to_the_tracker_4),
      .avs_export_clock_to_the_tracker_5                (avs_export_clock_to_the_tracker_5),
      .avs_export_column_mode_from_the_camera           (avs_export_column_mode_from_the_camera),
      .avs_export_column_size_from_the_camera           (avs_export_column_size_from_the_camera),
      .avs_export_done_to_the_tracker_0                 (avs_export_done_to_the_tracker_0),
      .avs_export_done_to_the_tracker_1                 (avs_export_done_to_the_tracker_1),
      .avs_export_done_to_the_tracker_2                 (avs_export_done_to_the_tracker_2),
      .avs_export_done_to_the_tracker_3                 (avs_export_done_to_the_tracker_3),
      .avs_export_done_to_the_tracker_4                 (avs_export_done_to_the_tracker_4),
      .avs_export_done_to_the_tracker_5                 (avs_export_done_to_the_tracker_5),
      .avs_export_exposure_from_the_camera              (avs_export_exposure_from_the_camera),
      .avs_export_green_threshold_max_from_the_sensor   (avs_export_green_threshold_max_from_the_sensor),
      .avs_export_green_threshold_min_from_the_sensor   (avs_export_green_threshold_min_from_the_sensor),
      .avs_export_height_from_the_camera                (avs_export_height_from_the_camera),
      .avs_export_height_to_the_tracker_0               (avs_export_height_to_the_tracker_0),
      .avs_export_height_to_the_tracker_1               (avs_export_height_to_the_tracker_1),
      .avs_export_height_to_the_tracker_2               (avs_export_height_to_the_tracker_2),
      .avs_export_height_to_the_tracker_3               (avs_export_height_to_the_tracker_3),
      .avs_export_height_to_the_tracker_4               (avs_export_height_to_the_tracker_4),
      .avs_export_height_to_the_tracker_5               (avs_export_height_to_the_tracker_5),
      .avs_export_pixel_to_the_tracker_0                (avs_export_pixel_to_the_tracker_0),
      .avs_export_pixel_to_the_tracker_1                (avs_export_pixel_to_the_tracker_1),
      .avs_export_pixel_to_the_tracker_2                (avs_export_pixel_to_the_tracker_2),
      .avs_export_pixel_to_the_tracker_3                (avs_export_pixel_to_the_tracker_3),
      .avs_export_pixel_to_the_tracker_4                (avs_export_pixel_to_the_tracker_4),
      .avs_export_pixel_to_the_tracker_5                (avs_export_pixel_to_the_tracker_5),
      .avs_export_red_threshold_max_from_the_sensor     (avs_export_red_threshold_max_from_the_sensor),
      .avs_export_red_threshold_min_from_the_sensor     (avs_export_red_threshold_min_from_the_sensor),
      .avs_export_row_mode_from_the_camera              (avs_export_row_mode_from_the_camera),
      .avs_export_row_size_from_the_camera              (avs_export_row_size_from_the_camera),
      .avs_export_start_column_from_the_camera          (avs_export_start_column_from_the_camera),
      .avs_export_start_row_from_the_camera             (avs_export_start_row_from_the_camera),
      .avs_export_width_from_the_camera                 (avs_export_width_from_the_camera),
      .avs_export_width_to_the_tracker_0                (avs_export_width_to_the_tracker_0),
      .avs_export_width_to_the_tracker_1                (avs_export_width_to_the_tracker_1),
      .avs_export_width_to_the_tracker_2                (avs_export_width_to_the_tracker_2),
      .avs_export_width_to_the_tracker_3                (avs_export_width_to_the_tracker_3),
      .avs_export_width_to_the_tracker_4                (avs_export_width_to_the_tracker_4),
      .avs_export_width_to_the_tracker_5                (avs_export_width_to_the_tracker_5),
      .avs_export_write_to_the_tracker_0                (avs_export_write_to_the_tracker_0),
      .avs_export_write_to_the_tracker_1                (avs_export_write_to_the_tracker_1),
      .avs_export_write_to_the_tracker_2                (avs_export_write_to_the_tracker_2),
      .avs_export_write_to_the_tracker_3                (avs_export_write_to_the_tracker_3),
      .avs_export_write_to_the_tracker_4                (avs_export_write_to_the_tracker_4),
      .avs_export_write_to_the_tracker_5                (avs_export_write_to_the_tracker_5),
      .avs_export_x_to_the_tracker_0                    (avs_export_x_to_the_tracker_0),
      .avs_export_x_to_the_tracker_1                    (avs_export_x_to_the_tracker_1),
      .avs_export_x_to_the_tracker_2                    (avs_export_x_to_the_tracker_2),
      .avs_export_x_to_the_tracker_3                    (avs_export_x_to_the_tracker_3),
      .avs_export_x_to_the_tracker_4                    (avs_export_x_to_the_tracker_4),
      .avs_export_x_to_the_tracker_5                    (avs_export_x_to_the_tracker_5),
      .avs_export_y_to_the_tracker_0                    (avs_export_y_to_the_tracker_0),
      .avs_export_y_to_the_tracker_1                    (avs_export_y_to_the_tracker_1),
      .avs_export_y_to_the_tracker_2                    (avs_export_y_to_the_tracker_2),
      .avs_export_y_to_the_tracker_3                    (avs_export_y_to_the_tracker_3),
      .avs_export_y_to_the_tracker_4                    (avs_export_y_to_the_tracker_4),
      .avs_export_y_to_the_tracker_5                    (avs_export_y_to_the_tracker_5),
      .clk_50                                           (clk_50),
      .locked_from_the_pll                              (locked_from_the_pll),
      .mcoll_pad_i_to_the_eth_ocm_0                     (mcoll_pad_i_to_the_eth_ocm_0),
      .mcrs_pad_i_to_the_eth_ocm_0                      (mcrs_pad_i_to_the_eth_ocm_0),
      .md_pad_i_to_the_eth_ocm_0                        (md_pad_i_to_the_eth_ocm_0),
      .md_pad_o_from_the_eth_ocm_0                      (md_pad_o_from_the_eth_ocm_0),
      .md_padoe_o_from_the_eth_ocm_0                    (md_padoe_o_from_the_eth_ocm_0),
      .mdc_pad_o_from_the_eth_ocm_0                     (mdc_pad_o_from_the_eth_ocm_0),
      .mrx_clk_pad_i_to_the_eth_ocm_0                   (mrx_clk_pad_i_to_the_eth_ocm_0),
      .mrxd_pad_i_to_the_eth_ocm_0                      (mrxd_pad_i_to_the_eth_ocm_0),
      .mrxdv_pad_i_to_the_eth_ocm_0                     (mrxdv_pad_i_to_the_eth_ocm_0),
      .mrxerr_pad_i_to_the_eth_ocm_0                    (mrxerr_pad_i_to_the_eth_ocm_0),
      .mtx_clk_pad_i_to_the_eth_ocm_0                   (mtx_clk_pad_i_to_the_eth_ocm_0),
      .mtxd_pad_o_from_the_eth_ocm_0                    (mtxd_pad_o_from_the_eth_ocm_0),
      .mtxen_pad_o_from_the_eth_ocm_0                   (mtxen_pad_o_from_the_eth_ocm_0),
      .mtxerr_pad_o_from_the_eth_ocm_0                  (mtxerr_pad_o_from_the_eth_ocm_0),
      .out_port_from_the_led_pio                        (out_port_from_the_led_pio),
      .phasedone_from_the_pll                           (phasedone_from_the_pll),
      .read_n_to_the_ext_flash                          (read_n_to_the_ext_flash),
      .reset_n                                          (reset_n),
      .select_n_to_the_ext_flash                        (select_n_to_the_ext_flash),
      .tri_state_bridge_flash_data                      (tri_state_bridge_flash_data),
      .write_n_to_the_ext_flash                         (write_n_to_the_ext_flash)
    );
