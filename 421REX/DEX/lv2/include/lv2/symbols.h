/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#if defined(FIRMWARE_4_21)

#define TOC						0x363E80 //done

#define create_kernel_object_symbol			0x125E4 // bytes matched: 0x44  F821FF617C0802A6FB610078F80100B0E80308007C9B2378FB8100802FA00000
#define destroy_kernel_object_symbol			0x11F48 // bytes matched: 0x78  F821FF717C0802A6FB810070FBA10078FBC10080FBE10088F80100A07C681B78
#define destroy_shared_kernel_object_symbol		0x118BC // bytes matched: 0x80  5480063E3D6080012B80007F540A2536616B00057D0A1A14409D000C7D6307B4
#define open_kernel_object_symbol			0x12C34 // bytes matched: 0x80  F821FF517C0802A6FBA10098FBC100A0FBE100A8789E8402789FC622789D0620
#define open_shared_kernel_object_symbol		0x12A44 //+ bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol		0x12064 //+ bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0

#define alloc_symbol					0x677F0 //+ bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol					0x67C2C //+ bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol				0xFEA4 //+ bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol				0x100C0 //+ bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol				0xFF5C //+ bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol			0xFD6C //+ bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol				0x63360 //+ bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol				0x62DC4 //+ bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol			0x634FC //+ bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol			0x62CB8 //+ bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol			0x73288 //+ bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define process_ea_to_lpar_addr_ex_symbol		0x7AE28 // bytes matched: 0x80  F821FF517C0802A6FB610088F80100C0E96300087CBB2B78FB810090FBC100A0
#define set_pte_symbol					0x6135C // bytes matched: 0x70  F821FF217C0802A6FAE100987C771B787C8323787CA42B787D054378F80100F0
#define map_process_memory_symbol			0x7A934 //+ bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define panic_symbol					0x2A44D8 // bytes matched: 0x2C  F821FF717C0802A6FB810070FBA10078FBC10080FBE10088F80100A07F8C42E6

#define memcpy_symbol					0x81FF4 //+ bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol					0x51DF8 //+ bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol					0x51108 //+ bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define memchr_symbol					0x510B8 // bytes matched: 0x80  2C2500004182003C8803000039200000386300017F802000409E00184800002C
#define printf_symbol					0x2A6828 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol				0x2AB2AC // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol					0x53220 //+ bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol					0x5318C //+ bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol					0x51FA4 //+ bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol					0x5206C //+ bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol					0x51FCC //+ bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol					0x51ED4 //+ bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol					0x51F50 //+ bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol					0x51FF8 //+ bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol					0x51F0C //+ bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define strrchr_symbol					0x520DC // bytes matched: 0x68  392000004800000C38630001419A0020880300007F8020002F000000409EFFEC

#define spin_lock_irqsave_ex_symbol			0x2A46A8 //+ bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol		0x2A467C //+ bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020

#define create_process_common_symbol			0x2A14C0 // bytes matched: 0x18  F821FE517C0802A6FA410140FA610148EA410250EA610248
#define create_process_base_symbol			0x2A0B58 // bytes matched: 0x18  F821FF117C0802A6FAC100A0FAE100A8FB0100B0FB2100B8
#define load_process_symbol				0x5004 //+ bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define process_kill_symbol				0x2A12C0 // bytes matched: 0x28  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78

#define ppu_thread_create_symbol			0x14530 //+ bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol				0x145E8 //* bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define ppu_thread_join_symbol				0x1463C //+ bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol				0x2A3E0 //+ bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_kernel_thread_symbol			0x264D0 // bytes matched: 0x80  F821FF117C0802A6550B0632F8010100550007FEFB2100B82F800000FB4100C0
#define create_user_thread_symbol			0x26C0C // bytes matched: 0x7C****  FB8100D0EB810160F8010100FAC100A0FB6100C87C761B78E87800007C9B2378
#define create_user_thread2_symbol			0x26A30 //+ bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol				0x25568 //+ bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol				0x24D2C //+ bytes matched: 0x24***  F821FF717C0802A6FBC100807C7E1B78FBA100783BA30010FBE100887FA3EB78
#define register_thread_symbol				0x29D2C8 //+ bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol			0x29DAB0 //+ bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define deallocate_user_stack_symbol			0x29DA18 // bytes matched: 0x38  F821FF717C0802A6FBA10078F80100A0E80300307CBD2B78FBC100802FA00000

#define mutex_create_symbol				0x13C78 //+ bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol				0x13C10 //*0x13C10 (already found in #define ppu_thread_exit_symbol) 0x13638  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_symbol				0x13C08 //+ bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_ex_symbol				0x1F30C // bytes matched: 0x3C  F821FF017C0802A6FB6100D87C7B1B78FB0100C0FB8100E0FBA100E8FBE100F8
#define mutex_trylock_symbol				0x13C04 // bytes matched: 0x14***  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol				0x13C00 //*NOT FOUND 0x13628  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090

#define cond_create_symbol				0x13DE4 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC100807C9D23787C7E1B783880003638A00000
#define cond_destroy_symbol				0x13D94 // bytes matched: 0x18  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_symbol				0x13D8C // bytes matched: 0x18**  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_ex_symbol				0x208F8 // bytes matched: 0x44  F821FEF17C0802A6FB6100E87C7B1B78FB2100D8FBA100F8FBC10100FBE10108
#define cond_signal_symbol				0x13D68 // bytes matched: 0x18****  E8010080386000007C0803A6382100704E80002038A00000
#define cond_signal_all_symbol				0x13D44 //* bytes matched: 0x20****  E8010080386000007C0803A6382100704E800020F821FF917C0802A6F8010080

#define semaphore_initialize_symbol			0x3422C // bytes matched: 0x10  F821FF717C0802A6FBA100787C7D1B78
#define semaphore_wait_ex_symbol			0x33F34 // bytes matched: 0x38  F821FF117C0802A6FB6100C8FB8100D0FBA100D8FBC100E0FB0100B0FB2100B8
#define semaphore_trywait_symbol			0x33B1C // bytes matched: 0x38  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78
#define semaphore_post_ex_symbol			0x33C68 // bytes matched: 0x80  F821FF417C0802A62F840000FBC100B03FC08001FB8100A0FBE100B8FAC10070

#define event_port_create_symbol			0x136B4 //+ bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol			0x13B1C //* bytes matched: 0x1C****  38800000F80100A0FBA1007838A000007C7D1B78E87E0000FBE10088
#define event_port_connect_symbol			0x13B94 //+ bytes matched: 0x20****  38A00000F80100B0FB810080FBA100887C9C23787C7D1B78E87B000038800000
#define event_port_disconnect_symbol			0x13AC0 //+ bytes matched: 0x18****  38800000F80100A0FBA1007838A000007C7D1B78E87C0000
#define event_port_send_symbol				0x136AC //+ bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_send_ex_symbol			0x2CFC0 // bytes matched: 0x44  F821FF517C0802A6FBE100A87C7F1B78FBC100A03BC30018FB2100787FC3F378

#define event_queue_create_symbol			0x139BC //+ bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol			0x13944 //*0x13944 (already found in #define event_port_destroy_symbol) 0x1336C  38800000F80100A0FBA1007838A000007C7D1B78E87E0000FBE10088
#define event_queue_receive_symbol			0x13788 //+ bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define event_queue_tryreceive_symbol			0x13854 // bytes matched: 0x68  F821FF617C0802A63D208001F80100B038000000FBA10088F801007080030088

#define cellFsOpen_symbol				0x2D99E0 //+ bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol				0x2D9848 //*NOT FOUND 0x2C48E0  F821FF617C0802A6FBC10090EBC22588FBA10088F80100B07C7D1B784BD4F9D1
#define cellFsRead_symbol				0x2D9984 //+ bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol				0x2D98F0 //+ bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol				0x2D9144 //+ bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol				0x2D91FC //+ bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUtime_symbol				0x2DB2C0 //0x2D91FC (already found in #define cellFsStat_symbol) 0x2C5CB0  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol			0x1AF9BC //+ bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100

#define cellFsUtilMount_symbol				0x2D8EB8 //*NOT FOUND 0x2C3DF0  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC22588
#define cellFsUtilUmount_symbol				0x2D8E40 //+ bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define cellFsUtilNewfs_symbol				0x2DA744 // bytes matched: 0x1C  F821FF017C0802A6FBA100E83BA10070FB6100D8FBC100F07C9B2378

#define pathdup_from_user_symbol			0x1B7D78 //+ bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol				0x2D9718 //+ bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol				0x196C44 //+ bytes matched: 0x20  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol				0x195C17 //*NOT FOUND 0x18F41C  7C83237838A00000388000004BFD8778E80300F82FA000004D9E002038000000

#define storage_get_device_info_symbol			0x2BA4DC //* bytes matched: 0x10*  7C0802A6F821FF71F80100A0FBE10088
#define storage_get_device_config_symbol		0x2B9048 // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBA10078
#define storage_open_symbol				0x2BA704 //*NOT FOUND 0x2A9660  E9221E987C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
#define storage_close_symbol				0x2B8B68 //+ bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol				0x2B80E8 //+ bytes matched: 0x10  F821FF017C0802A6FBE100F83BE10070
#define storage_write_symbol				0x2B7FB8 //0x2B7FB8 (already found in #define storage_read_symbol) 0x2A8890  F821FF017C0802A6FBE100F83BE10070FB0100C0FB2100C8FB4100D0FB6100D8FB8100E0FBC100F07C9C23787CDE33787CBA2B787CF93B787C781B78613B00087FE3FB78FAE100B8FBA100E8F80101107D174378
#define storage_send_device_command_symbol		0x2B7C08 //+ bytes matched: 0x18*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000
#define storage_map_io_memory_symbol			0x2BA388 //* bytes matched: 0x18*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE90000
#define storage_unmap_io_memory_symbol			0x2BA244 //*0x2B9048 (already found in #define storage_get_device_config_symbol) 0x2A99D8  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define new_medium_listener_object_symbol		0x9C0E4 // bytes matched: 0x48****  3880001DF80100A0FBC10080FBA1007838A00000EBDF000038600E002FBE0000
#define delete_medium_listener_object_symbol		0x9D91C // bytes matched: 0x40  F821FF817C0802A62C240000FBE100783FE08001FBC10070F80100907C9E2378
#define set_medium_event_callbacks_symbol		0x9DC80 // bytes matched: 0x58  F821FF517C0802A6FB410080F80100C038000000FB610088FB8100907C9B2378

#define cellUsbdRegisterLdd_symbol			0x2956E8 // bytes matched: 0x24***  F8010090E8090000F801007838000000E9610078E80900007D6B027938000000
#define cellUsbdUnregisterLdd_symbol			0x295698 //0x295698 (already found in #define cellUsbdRegisterLdd_symbol) 0x2903F4  F8010090E8090000F801007838000000E9610078E80900007D6B02793800000040C20020
#define cellUsbdScanStaticDescriptor_symbol		0x2968E8 // bytes matched: 0x2C***  7CA62B78F8010090E9490000F9410078394000007C802378E9610078E9490000
#define cellUsbdOpenPipe_symbol				0x296998 // bytes matched: 0x28***  7C852378F8010090E8090000F801007838000000E9610078E80900007D6B0279
#define cellUsbdClosePipe_symbol			0x296948 //0x296998 (already found in #define cellUsbdRegisterLdd_symbol) 0x2916A4  F8010090E8090000F801007838000000E9610078E80900007D6B02793800000040C20020
#define cellUsbdControlTransfer_symbol			0x29684C // bytes matched: 0x18  F821FF617C0802A62C240000F80100B0FBE100983C008011
#define cellUsbdBulkTransfer_symbol			0x2967CC // bytes matched: 0x10  F821FF517C0802A6FBA10098F80100C0

#define decrypt_func_symbol				0x37F38 //+ bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol			0x53634 //+ bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol			0x5D0A0 //+ bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define authenticate_program_segment_symbol		0x5E4DC //NOT FOUND 0x59C64  E96299B87C0802A6F821FF51F80100C0E86299C838000001FB210078E96B0000

#define prx_load_module_symbol				0x8C7B4 //***+ bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol				0x8B480 //+ bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol				0x8C858 //+ bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol			0x8B1B4 //+ bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol			0x8ABAC // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_id_by_address_symbol		0x8AABC // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF8D
#define prx_get_module_id_by_name_symbol		0x8AB0C // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF3D
#define prx_get_module_list_symbol			0x8AC2C // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define load_module_by_fd_symbol			0x8BDE4 // bytes matched: 0x64  7D800026F821FF11FAE100A8FB0100B0FB6100C8FAC100A0FB2100B8FB4100C0
#define parse_sprx_symbol				0x89AD8 // bytes matched: 0x34  F821FF517C0802A6FB810090FBE100A87C7C1B787C9F23783860002038800000
#define open_prx_object_symbol				0x82BB0 // bytes matched: 0x18  F821FF917C0802A678840020F8010080E863020838E00023
#define close_prx_object_symbol				0x834C0 // bytes matched: 0x80**  2C2300007C0802A6F821FF81FBC10070FBE10078F80100907C7F1B787C9E2378
#define lock_prx_mutex_symbol				0x8AA64 //NOT FOUND 0x85574  E922A690E86900004BFF8714E922A690E86900004BFF8704F821FF717C0802A6
#define unlock_prx_mutex_symbol				0x8AA70 // bytes matched: 0x80***  F821FF717C0802A6FBA100787C7D1B78F80100A04BFFFFD57FA3EB784BFFB72D

#define extend_kstack_symbol				0x731E0 //+ bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78

#define get_pseudo_random_number_symbol			0x25DDE8 //+ bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define md5_reset_symbol				0x169F14 // bytes matched: 0x80  3D2067453D60EFCD3D4098BA3C0010323900000061292301616BAB89614ADCFE
#define md5_update_symbol				0x16A9B4 // bytes matched: 0x80  F821FF517C0802A654AB1838F80100C080030010FBC100A07D205A147C7E1B78
#define md5_final_symbol				0x16AB34 // bytes matched: 0x54  F821FF617C0802A6FBE100987C9F2378FBC100903BC10070FBA1008838A00008
#define ss_get_open_psid_symbol				0x2601B0 // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A0480000F5
#define update_mgr_read_eeprom_symbol			0x259FE0 // bytes matched: 0x30  F821FF317C0802A6FBE100C83BE10070FB8100B0FBA100B87C7C1B787CBD2B78
#define update_mgr_write_eeprom_symbol			0x259F14 // bytes matched: 0x4C  F821FF217C0802A6FBE100D83BE10070FB6100B8FBA100C87C7B1B787CBD2B78

#define ss_params_get_update_status_symbol		0x5521C // bytes matched: 0x80  3CA070617C0802A63CC075703CE0737460A5726160C6646160E761742C230000

#define syscall_table_symbol				0x37A1B0 //+done
#define syscall_call_offset				0x2ABD90 //+ <Not found in TOC> bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028

#define read_bdvd0_symbol				0x1C224C //+ bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol				0x1C3E78 //+ bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol				0x1D1000 //+ bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090

#define storage_internal_get_device_object_symbol	0x2B76C0 //+ bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000

#define hid_mgr_read_usb_symbol				0x10A0F4 // bytes matched: 0x74*  7C0802A6F821FF91F80100802F2400003800FFEB812B00002F890000409E0018
#define hid_mgr_read_bt_symbol				0x103FCC //NOT FOUND 0xFD6C4  F821FF517C0802A6FB410080EB42CF08F80100C0FB610088FBA10098FBC100A0

#define bt_set_controller_info_internal_symbol		0xF8044 // bytes matched: 0x80  F821FF417C0802A62F85054CF80100D054C0043EFB410090FBA100A8FBC100B0

/* Calls, jumps */
#define device_event_port_send_call			0x2C44E8 //+ <Not found in TOC> bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378

#define ss_pid_call_1					0x24981C // <Not found in TOC> bytes matched: 0x14*  906100703881007838A1008038C100A038610070

#define process_map_caller_call				0x4D24 //+ <Not found in TOC> bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000

#define read_module_header_call				0x82AA4 // <Not found in TOC> bytes matched: 0x50*  2F8300007C6307B4409E0008E8610070E8010090382100807C0803A64E800020
#define read_module_body_call				0x671C // <Not found in TOC> bytes matched: 0x4C*  2F8300007C7F1B7840DE013CE80100887FBE000040DE0160FBDD0010E81C0018
#define load_module_by_fd_call1				0x8C650 // <Not found in TOC> bytes matched: 0x30  4BFFF795801B000C7C7D1B78E87B00102F800000409DFFBC3BE300183BC00000

#define shutdown_copy_params_call			0xAB3C // <Not found in TOC> bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78

#define fsloop_open_call				0x2D9B78 //+ <Not found in TOC> bytes matched: 0x24  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call				0x2D9BC8 //+ <Not found in TOC> bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call				0x2D9C08 //+ <Not found in TOC> bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8

/* Patches */
#define shutdown_patch_offset				0xAB28 // <Not found in TOC> bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
#define module_sdk_version_patch_offset			0x29C8F0 // <Not found in TOC> bytes matched: 0x78  419D0008386000007C6307B44E800020800400047F804800409EFFEC80040008
#define module_add_parameter_to_parse_sprxpatch_offset	0x8BEC0 // <Not found in TOC> bytes matched: 0x18  90030198FB4301A8FB4301A0934301B8FB4301C8FB4301C0

#define user_thread_prio_patch				0x21BAC //+ <Not found in TOC> bytes matched: 0x30  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2				0x21BB8 //+ <Not found in TOC> bytes matched: 0x24  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6

/* Rtoc entries */

#define io_rtoc_entry_1					-0x48 //*syscall_open 1st ld r30
#define io_sub_rtoc_entry_1				-0x7EA0 //+offset 0x621C

#define decrypt_rtoc_entry_2				-0x65A0 //+7800000264000200F81F0050 over ld r3
#define decrypter_data_entry				-0x7F10 //3880000038FF00086084800038600000 over ld r30

#define storage_rtoc_entry_1				0x2328 //+3880001F38A0000038600050EB690000 over ld r9

#define device_event_rtoc_entry_1			0x26B0 //+78050620E8CA00387D052B78E92B0000 over ld r11

#define time_rtoc_entry_1				-0x75E0 //syscall_sys_time_get_current_time 1st ld r8
#define time_rtoc_entry_2				-0x75E8 //syscall_sys_time_get_current_time 2nd ld r7

#define thread_rtoc_entry_1				-0x7660 //7D3042A6E8690048E90100B8 over ld r11

#define process_rtoc_entry_1				-0x7AA0 //3FC0800163DE0005E87D0000 over ld r29

#define bt_rtoc_entry_1					-0x34D8 //900100989921009CB161009EFBC10088 over ld r3

/* Permissions */
#define permissions_func_symbol				0x3560 // bytes matched: 0x6C  E92280087C0802A6F821FF21FBA100C8FBC100D0FBE100D8E8E900187C9F2378
#define permissions_exception1				0x26AB0 //NOT FOUND 0x24F30  4BFDE6315463063E2F830000419E0114EBA28AF0EB628B007FA4EB783BE00000
#define permissions_exception2				0xC99F4 // <Not found in TOC> bytes matched: 0x34*  E80100A0786306207C0803A6382100903863FFFF78630FE07C6300345463D97E
#define permissions_exception3				0x21C80 //NOT FOUND 0x20300  4BFE32615463063E2F830000419E01F8E96289407D3042A6E8690048E90100B8

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x3F7A40 //NOT FOUND 0x3DBE40  
#define patch_func2 					0x5DA58 //+ bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset 				0x2C
#define patch_func8 					0x5A7B8 // bytes matched: 0x18  386300087C0802A63880000038A00000F821FF91F8010080
#define patch_func8_offset1 				0xA4 // <Not found in TOC> bytes matched: 0x68  0000000000000000000000000000000000000000000000000000000000000000
#define patch_func8_offset2 				0x208 // <Not found in TOC> bytes matched: 0x80  4800000000000000000000000000000000000000000000000000000000000000
#define patch_func9 					0x5DF14 // bytes matched: 0x6C  F821FD017C0802A6FBA102E8787D0660FAA102A82FBD0000FB0102C0FB2102C8
#define patch_func9_offset 				0x470 // <Not found in TOC> bytes matched: 0x54  000000000000000000000000000000007C7143A67C9243A67CB343A67C7A02A6
#define mem_base2					0x3D90 // bytes matched: 0x24  F821FEB17C0802A6FB8101307C9C2378388100D8FBE10148FBA10138FBC10140

/* vars */
// TODO: #define open_psid_buf_symbol			0x45218C
#define thread_info_symbol				0x392A30 //NOT FOUND 0x376E30  search for offset of "_SYSTEM IDLE 1" on LV2 dump, then substract -0x5C

#endif /* FIRMWARE */

#endif /* __FIRMWARE_SYMBOLS_H_S__ */
