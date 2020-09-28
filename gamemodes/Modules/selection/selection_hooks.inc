#include <YSI_Coding\y_hooks>

//td
new Text:Selection_TD[16];

hook OnGameModeInit() {

    Selection_TD[0] = TextDrawCreate(24.348472, -4.833328, "box");
    TextDrawLetterSize(Selection_TD[0], 0.000000, 60.038059);
    TextDrawTextSize(Selection_TD[0], 0.000000, 1323.000000);
    TextDrawAlignment(Selection_TD[0], 2);
    TextDrawColor(Selection_TD[0], -1);
    TextDrawUseBox(Selection_TD[0], 1);
    TextDrawBoxColor(Selection_TD[0], 208);
    TextDrawSetShadow(Selection_TD[0], 0);
    TextDrawSetOutline(Selection_TD[0], 0);
    TextDrawBackgroundColor(Selection_TD[0], 255);
    TextDrawFont(Selection_TD[0], 1);
    TextDrawSetProportional(Selection_TD[0], 1);
    TextDrawSetShadow(Selection_TD[0], 0);

    Selection_TD[1] = TextDrawCreate(300.047149, 102.333282, "box");
    TextDrawLetterSize(Selection_TD[1], 0.000000, 1.285506);
    TextDrawTextSize(Selection_TD[1], 0.000000, 154.000000);
    TextDrawAlignment(Selection_TD[1], 2);
    TextDrawColor(Selection_TD[1], -1);
    TextDrawUseBox(Selection_TD[1], 1);
    TextDrawBoxColor(Selection_TD[1], -1);
    TextDrawSetShadow(Selection_TD[1], 0);
    TextDrawSetOutline(Selection_TD[1], 0);
    TextDrawBackgroundColor(Selection_TD[1], 255);
    TextDrawFont(Selection_TD[1], 1);
    TextDrawSetProportional(Selection_TD[1], 1);
    TextDrawSetShadow(Selection_TD[1], 0);

    Selection_TD[2] = TextDrawCreate(299.915649, 102.933273, "box");
    TextDrawLetterSize(Selection_TD[2], 0.000000, 1.145250);
    TextDrawTextSize(Selection_TD[2], 0.000000, 152.938934);
    TextDrawAlignment(Selection_TD[2], 2);
    TextDrawColor(Selection_TD[2], -1);
    TextDrawUseBox(Selection_TD[2], 1);
    TextDrawBoxColor(Selection_TD[2], 255);
    TextDrawSetShadow(Selection_TD[2], 0);
    TextDrawSetOutline(Selection_TD[2], 0);
    TextDrawBackgroundColor(Selection_TD[2], 255);
    TextDrawFont(Selection_TD[2], 1);
    TextDrawSetProportional(Selection_TD[2], 1);
    TextDrawSetShadow(Selection_TD[2], 0);

    Selection_TD[3] = TextDrawCreate(299.833526, 100.916633, "Nickname");
    TextDrawLetterSize(Selection_TD[3], 0.282401, 1.390000);
    TextDrawTextSize(Selection_TD[3], 0.000000, -94.000000);
    TextDrawAlignment(Selection_TD[3], 2);
    TextDrawColor(Selection_TD[3], -1);
    TextDrawUseBox(Selection_TD[3], 1);
    TextDrawBoxColor(Selection_TD[3], 0);
    TextDrawSetShadow(Selection_TD[3], 0);
    TextDrawSetOutline(Selection_TD[3], 0);
    TextDrawBackgroundColor(Selection_TD[3], 255);
    TextDrawFont(Selection_TD[3], 1);
    TextDrawSetProportional(Selection_TD[3], 1);
    TextDrawSetShadow(Selection_TD[3], 0);

    Selection_TD[4] = TextDrawCreate(139.973159, 157.983291, "box");
    TextDrawLetterSize(Selection_TD[4], 0.000000, 20.073204);
    TextDrawTextSize(Selection_TD[4], 241.697906, 0.000000);
    TextDrawAlignment(Selection_TD[4], 1);
    TextDrawColor(Selection_TD[4], -1);
    TextDrawUseBox(Selection_TD[4], 1);
    TextDrawBoxColor(Selection_TD[4], -1);
    TextDrawSetShadow(Selection_TD[4], 0);
    TextDrawSetOutline(Selection_TD[4], 0);
    TextDrawBackgroundColor(Selection_TD[4], 255);
    TextDrawFont(Selection_TD[4], 1);
    TextDrawSetProportional(Selection_TD[4], 1);
    TextDrawSetShadow(Selection_TD[4], 0);

    Selection_TD[5] = TextDrawCreate(140.473190, 158.483322, "box");
    TextDrawLetterSize(Selection_TD[5], 0.000000, 19.959877);
    TextDrawTextSize(Selection_TD[5], 241.298492, 0.000000);
    TextDrawAlignment(Selection_TD[5], 1);
    TextDrawColor(Selection_TD[5], 255);
    TextDrawUseBox(Selection_TD[5], 1);
    TextDrawBoxColor(Selection_TD[5], 255);
    TextDrawSetShadow(Selection_TD[5], 0);
    TextDrawSetOutline(Selection_TD[5], 0);
    TextDrawBackgroundColor(Selection_TD[5], 255);
    TextDrawFont(Selection_TD[5], 1);
    TextDrawSetProportional(Selection_TD[5], 1);
    TextDrawSetShadow(Selection_TD[5], 0);

    Selection_TD[6] = TextDrawCreate(174.210830, 138.132110, "Host");
    TextDrawLetterSize(Selection_TD[6], 0.301610, 1.430832);
    TextDrawTextSize(Selection_TD[6], 208.000000, 0.000000);
    TextDrawAlignment(Selection_TD[6], 1);
    TextDrawColor(Selection_TD[6], -1);
    TextDrawUseBox(Selection_TD[6], 1);
    TextDrawBoxColor(Selection_TD[6], 25088);
    TextDrawSetShadow(Selection_TD[6], 0);
    TextDrawSetOutline(Selection_TD[6], 1);
    TextDrawBackgroundColor(Selection_TD[6], 255);
    TextDrawFont(Selection_TD[6], 2);
    TextDrawSetProportional(Selection_TD[6], 1);
    TextDrawSetShadow(Selection_TD[6], 0);
    TextDrawSetSelectable(Selection_TD[6], true);

    Selection_TD[7] = TextDrawCreate(249.279815, 157.983291, "box");
    TextDrawLetterSize(Selection_TD[7], 0.000000, 20.073204);
    TextDrawTextSize(Selection_TD[7], 351.004577, 0.000000);
    TextDrawAlignment(Selection_TD[7], 1);
    TextDrawColor(Selection_TD[7], -1);
    TextDrawUseBox(Selection_TD[7], 1);
    TextDrawBoxColor(Selection_TD[7], -1);
    TextDrawSetShadow(Selection_TD[7], 0);
    TextDrawSetOutline(Selection_TD[7], 0);
    TextDrawBackgroundColor(Selection_TD[7], 255);
    TextDrawFont(Selection_TD[7], 1);
    TextDrawSetProportional(Selection_TD[7], 1);
    TextDrawSetShadow(Selection_TD[7], 0);

    Selection_TD[8] = TextDrawCreate(358.286468, 157.983291, "box");
    TextDrawLetterSize(Selection_TD[8], 0.000000, 20.073204);
    TextDrawTextSize(Selection_TD[8], 460.011230, 0.000000);
    TextDrawAlignment(Selection_TD[8], 1);
    TextDrawColor(Selection_TD[8], -1);
    TextDrawUseBox(Selection_TD[8], 1);
    TextDrawBoxColor(Selection_TD[8], -1);
    TextDrawSetShadow(Selection_TD[8], 0);
    TextDrawSetOutline(Selection_TD[8], 0);
    TextDrawBackgroundColor(Selection_TD[8], 255);
    TextDrawFont(Selection_TD[8], 1);
    TextDrawSetProportional(Selection_TD[8], 1);
    TextDrawSetShadow(Selection_TD[8], 0);

    Selection_TD[9] = TextDrawCreate(249.679855, 158.483322, "box");
    TextDrawLetterSize(Selection_TD[9], 0.000000, 19.959877);
    TextDrawTextSize(Selection_TD[9], 350.505157, 0.000000);
    TextDrawAlignment(Selection_TD[9], 1);
    TextDrawColor(Selection_TD[9], 255);
    TextDrawUseBox(Selection_TD[9], 1);
    TextDrawBoxColor(Selection_TD[9], 255);
    TextDrawSetShadow(Selection_TD[9], 0);
    TextDrawSetOutline(Selection_TD[9], 0);
    TextDrawBackgroundColor(Selection_TD[9], 255);
    TextDrawFont(Selection_TD[9], 1);
    TextDrawSetProportional(Selection_TD[9], 1);
    TextDrawSetShadow(Selection_TD[9], 0);

    Selection_TD[10] = TextDrawCreate(358.686492, 158.483322, "box");
    TextDrawLetterSize(Selection_TD[10], 0.000000, 19.959877);
    TextDrawTextSize(Selection_TD[10], 459.511810, 0.000000);
    TextDrawAlignment(Selection_TD[10], 1);
    TextDrawColor(Selection_TD[10], 255);
    TextDrawUseBox(Selection_TD[10], 1);
    TextDrawBoxColor(Selection_TD[10], 255);
    TextDrawSetShadow(Selection_TD[10], 0);
    TextDrawSetOutline(Selection_TD[10], 0);
    TextDrawBackgroundColor(Selection_TD[10], 255);
    TextDrawFont(Selection_TD[10], 1);
    TextDrawSetProportional(Selection_TD[10], 1);
    TextDrawSetShadow(Selection_TD[10], 0);

    Selection_TD[11] = TextDrawCreate(278.517181, 138.132110, "public");
    TextDrawLetterSize(Selection_TD[11], 0.301610, 1.430832);
    TextDrawTextSize(Selection_TD[11], 320.000000, 0.000000);
    TextDrawAlignment(Selection_TD[11], 1);
    TextDrawColor(Selection_TD[11], -1);
    TextDrawUseBox(Selection_TD[11], 1);
    TextDrawBoxColor(Selection_TD[11], 0);
    TextDrawSetShadow(Selection_TD[11], 0);
    TextDrawSetOutline(Selection_TD[11], 1);
    TextDrawBackgroundColor(Selection_TD[11], 255);
    TextDrawFont(Selection_TD[11], 2);
    TextDrawSetProportional(Selection_TD[11], 1);
    TextDrawSetShadow(Selection_TD[11], 0);
    TextDrawSetSelectable(Selection_TD[11], true);

    Selection_TD[12] = TextDrawCreate(381.123443, 138.132110, "private");
    TextDrawLetterSize(Selection_TD[12], 0.301610, 1.430832);
    TextDrawTextSize(Selection_TD[12], 434.000000, 0.000000);
    TextDrawAlignment(Selection_TD[12], 1);
    TextDrawColor(Selection_TD[12], -1);
    TextDrawUseBox(Selection_TD[12], 1);
    TextDrawBoxColor(Selection_TD[12], 0);
    TextDrawSetShadow(Selection_TD[12], 0);
    TextDrawSetOutline(Selection_TD[12], 1);
    TextDrawBackgroundColor(Selection_TD[12], 255);
    TextDrawFont(Selection_TD[12], 2);
    TextDrawSetProportional(Selection_TD[12], 1);
    TextDrawSetShadow(Selection_TD[12], 0);
    TextDrawSetSelectable(Selection_TD[12], true);

    Selection_TD[13] = TextDrawCreate(190.673507, 176.717620, "Host_game~n~Allows_you_to_create~n~a_new_game._~n~~n~It_will_be_accessible_via~n~unique_code_which_will_be~n~written_on_the_bottom~n~of_the_screen.~n~~n~Hosting_a_game_allows~n~you_to_modify_the_game~n~rules,_like_cooldown_time~n~discussion_time_and_much~n~more.");
    TextDrawLetterSize(Selection_TD[13], 0.224772, 0.994167);
    TextDrawAlignment(Selection_TD[13], 2);
    TextDrawColor(Selection_TD[13], -1);
    TextDrawSetShadow(Selection_TD[13], 0);
    TextDrawSetOutline(Selection_TD[13], 1);
    TextDrawBackgroundColor(Selection_TD[13], 255);
    TextDrawFont(Selection_TD[13], 1);
    TextDrawSetProportional(Selection_TD[13], 1);
    TextDrawSetShadow(Selection_TD[13], 0);

    Selection_TD[14] = TextDrawCreate(299.480133, 190.518463, "Public_section~n~lists_all_available_public~n~games.~n~~n~You_can_chose_between_3~n~maps_and_many_chats.~n~~n~Public_game_is_a_great~n~choice_if_you_would_not~n~like_to_wait_your_own~n~host_game_to_get_full");
    TextDrawLetterSize(Selection_TD[14], 0.224772, 0.994167);
    TextDrawAlignment(Selection_TD[14], 2);
    TextDrawColor(Selection_TD[14], -1);
    TextDrawSetShadow(Selection_TD[14], 0);
    TextDrawSetOutline(Selection_TD[14], 1);
    TextDrawBackgroundColor(Selection_TD[14], 255);
    TextDrawFont(Selection_TD[14], 1);
    TextDrawSetProportional(Selection_TD[14], 1);
    TextDrawSetShadow(Selection_TD[14], 0);

    Selection_TD[15] = TextDrawCreate(408.786804, 197.718902, "Private_session~n~allows_you_to_join_in_via~n~unique_code_hoster_give~n~you._~n~~n~This_is_a_great_option_if~n~you_are_playing_with~n~your_friends_or_you_want~n~to_limit_the_number_of~n~players");
    TextDrawLetterSize(Selection_TD[15], 0.224772, 0.994167);
    TextDrawAlignment(Selection_TD[15], 2);
    TextDrawColor(Selection_TD[15], -1);
    TextDrawSetShadow(Selection_TD[15], 0);
    TextDrawSetOutline(Selection_TD[15], 1);
    TextDrawBackgroundColor(Selection_TD[15], 255);
    TextDrawFont(Selection_TD[15], 1);
    TextDrawSetProportional(Selection_TD[15], 1);
    TextDrawSetShadow(Selection_TD[15], 0);

    return 1;
}

hook OnPlayerClickTextDraw(playerid, Text:clickedid) {
    if(clickedid == Selection_TD[6]) {
        for(new i; i < Selection_TD[16] && i != Selection_TD[0]; i++) {
            TextDrawHideForPlayer(playerid, Selection_TD[i]);
        }
    }
    return 1;
}