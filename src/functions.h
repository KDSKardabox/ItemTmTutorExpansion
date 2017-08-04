#ifndef VANILLA_FUNCTIONS
#define VANILLA_FUNCTIONS

u8 get_attributes(struct pokemon* poke_address, u8 request, void* destination);
void buffer_item(u16 itemID, void* text_buffer);
void* strcpy_xFF_terminated_0(void* dst, void* src);
void* int_to_string(void* dst, u32 number, u8 formatting, u8 max_digits);
void* fdecode_and_copy(void* dst, void* src);
u8 check_if_move_learnt(struct pokemon* poke_addres, u16 move);
void bag_print_msg(u8 taskID, u8 arg, void* text_ptr, void* callback);
void TM_boot_sound_and_print(u8 taskID);


//Item Overworld Effects
void ItemUseOutOfBattle_Mail(u8 d);
void ItemUseOutOfBattle_EnigmaBerry(u8 d);
void ItemUseOutOfBattle_RareCandy(u8 d);
void ItemUseOutOfBattle_PPUp(u8 d);
void ItemUseOutOfBattle_Repel(u8 d);
void ItemUseOutOfBattle_EscapeRope(u8 d);
void ItemUseOutOfBattle_PokeblockCase(u8 d);
void ItemUseOutOfBattle_EvolutionStone(u8 d);
void ItemUseOutOfBattle_WailmerPail(u8 d);
void ItemUseOutOfBattle_CoinCase(u8 d);
void ItemUseOutOfBattle_Itemfinder(u8 d);
void ItemUseOutOfBattle_Bike(u8 d);
void ItemUseOutOfBattle_Rod(u8 d);
void ItemUseOutOfBattle_CannotUse(u8 d);
void ItemUseOutOfBattle_Medicine(u8 d);
void ItemUseOutOfBattle_PPRecovery(u8 d);
void ItemUseOutOfBattle_BlackWhiteFlute(u8 d);
void ItemUseOutOfBattle_SacredAsh(u8 d);
void ItemUseOutOfBattle_TMHM(u8 d);

//Item In-Battle Effects
void ItemUseInBattle_PokeBall(u8 d);
void ItemUseInBattle_Medicine(u8 d);
void ItemUseInBattle_PPRecovery(u8 d);
void ItemUseInBattle_StatIncrease(u8 d);
void ItemUseInBattle_Escape(u8 d);
void ItemUseInBattle_EnigmaBerry(u8 d);


#endif /* VANILLA_FUNCTIONS */
