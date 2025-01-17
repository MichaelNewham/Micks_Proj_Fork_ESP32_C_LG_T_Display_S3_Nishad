// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: TD Nixie

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_num_0 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_0, &ui_img_numbers_0_png);
lv_obj_set_width( ui_num_0, LV_SIZE_CONTENT);  /// 54
lv_obj_set_height( ui_num_0, LV_SIZE_CONTENT);   /// 96
lv_obj_set_x( ui_num_0, 14 );
lv_obj_set_y( ui_num_0, 28 );
lv_obj_add_flag( ui_num_0, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_0, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_00 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_00, &ui_img_numbers_0_png);
lv_obj_set_width( ui_num_00, LV_SIZE_CONTENT);  /// 54
lv_obj_set_height( ui_num_00, LV_SIZE_CONTENT);   /// 96
lv_obj_set_x( ui_num_00, 88 );
lv_obj_set_y( ui_num_00, 28 );
lv_obj_add_flag( ui_num_00, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_00, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_000 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_000, &ui_img_numbers_0_png);
lv_obj_set_width( ui_num_000, LV_SIZE_CONTENT);  /// 54
lv_obj_set_height( ui_num_000, LV_SIZE_CONTENT);   /// 96
lv_obj_set_x( ui_num_000, 180 );
lv_obj_set_y( ui_num_000, 28 );
lv_obj_add_flag( ui_num_000, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_000, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_0000 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_0000, &ui_img_numbers_0_png);
lv_obj_set_width( ui_num_0000, LV_SIZE_CONTENT);  /// 54
lv_obj_set_height( ui_num_0000, LV_SIZE_CONTENT);   /// 96
lv_obj_set_x( ui_num_0000, 253 );
lv_obj_set_y( ui_num_0000, 28 );
lv_obj_add_flag( ui_num_0000, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_0000, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_1, &ui_img_numbers_1_png);
lv_obj_set_width( ui_num_1, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_1, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_1, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_2 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_2, &ui_img_numbers_2_png);
lv_obj_set_width( ui_num_2, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_2, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_3 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_3, &ui_img_numbers_3_png);
lv_obj_set_width( ui_num_3, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_3, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_4 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_4, &ui_img_numbers_4_png);
lv_obj_set_width( ui_num_4, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_4, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_5 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_5, &ui_img_numbers_5_png);
lv_obj_set_width( ui_num_5, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_5, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_6 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_6, &ui_img_numbers_6_png);
lv_obj_set_width( ui_num_6, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_6, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_6, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_7 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_7, &ui_img_numbers_7_png);
lv_obj_set_width( ui_num_7, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_7, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_8 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_8, &ui_img_numbers_8_png);
lv_obj_set_width( ui_num_8, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_8, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_8, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_num_9 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_num_9, &ui_img_numbers_9_png);
lv_obj_set_width( ui_num_9, LV_SIZE_CONTENT);  /// 55
lv_obj_set_height( ui_num_9, LV_SIZE_CONTENT);   /// 96
lv_obj_add_flag( ui_num_9, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_num_9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_colon = lv_img_create(ui_Screen1);
lv_img_set_src(ui_colon, &ui_img_numbers_colon_png);
lv_obj_set_width( ui_colon, LV_SIZE_CONTENT);  /// 16
lv_obj_set_height( ui_colon, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_colon, 153 );
lv_obj_set_y( ui_colon, 57 );
lv_obj_add_flag( ui_colon, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_colon, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_img_bg = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_bg, &ui_img_nixie_bg_png);
lv_obj_set_width( ui_img_bg, LV_SIZE_CONTENT);  /// 320
lv_obj_set_height( ui_img_bg, LV_SIZE_CONTENT);   /// 170
lv_obj_set_align( ui_img_bg, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_img_bg, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_bg, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
