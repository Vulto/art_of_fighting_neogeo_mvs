;
;	    *** HERO FLAG ***
;

;*** FLAG ***

BHF_DAMAGE	EQU	0	get dammage
HF_DAMAGE	EQU	00000001B
BHF_STATE_DISP	EQU	1	status display
HF_STATE_DISP	EQU	00000010B
BHF_NO_BJUDGE	EQU	2	not back obj judge
HF_NO_BJUDGE	EQU	00000100B
BHF_NO_DIR_CHG	EQU	3	not dir change
HF_NO_DIR_CHG	EQU	00001000B
BHF_DEF_HIT	EQU	4	defencive hit
HF_DEF_HIT	EQU	00010000B
BHF_NON_ACT	EQU	5	no action
HF_NON_ACT	EQU	00100000B
BHF_ON_OBJ	EQU	6	in upper range of anther obj
HF_ON_OBJ	EQU	01000000B
BHF_OBJ_STOP	EQU	7	stop on the another obj (not fall down)
HF_OBJ_STOP	EQU	10000000B

;*** HERO_STATE ***

BHS_DEFENCE	EQU	0	deffence
HS_DEFENCE	EQU	00000001B
BHS_PUNCH	EQU	1	punch
HS_PUNCH	EQU	00000010B
BHS_KICK	EQU	2	kick
HS_KICK		EQU	00000100B
BHS_SPECIAL	EQU	3	special attack
HS_SPECIAL	EQU	00001000B
BHS_JUMP	EQU	4	jump
HS_JUMP		EQU	00010000B
BHS_DOWN	EQU	5	sit down
HS_DOWN		EQU	00100000B
BHS_DAMAGE	EQU	6	damage action
HS_DAMAGE	EQU	01000000B
BHS_AUTO	EQU	7	auto move mode
HS_AUTO		EQU	10000000B



;*** STATE in HERO ***

BHSS_LOCK_OFF	EQU	0	nage lock offence
HSS_LOCK_OFF	EQU	00000001B
BHSS_LOCK_DEF	EQU	1	nage lock defence
HSS_LOCK_DEF	EQU	00000010B
BHSS_NAGERARE	EQU	2	nagerare
HSS_NAGERARE	EQU	00000100B
;BHSS_NAGERARE2	EQU	3	nagerare
;HSS_NAGERARE2	EQU	00001000B

;	*** player control  ***
;
COMMAND_INT	EQU	7
COM_INT_BIT	EQU	10000000B
DAMAGE_END	EQU	6
DM_END_BIT	EQU	01000000B
ATTACK_MODE	EQU	5
AT_MODE_BIT	EQU	00100000B
SPECIAL_MODE	EQU	4
SP_MODE_BIT	EQU	00010000B
DIS_SRCH_MODE	EQU	3
D_SRCH_BIT	EQU	00001000B
COMMAND_STOP	EQU	2
COM_STOP_BIT	EQU	00000100B
COM_RESULT_END	EQU	1
COM_REND_BIT	EQU	00000010B
ACT_COM_MISS	EQU	0
COM_MISS_BIT	EQU	00000001B


;	    *** PLAYER_STARE in PLAYER ***
;

BPS_START_DI	EQU	7		1=start disable
PS_START_DI	EQU	10000000B
BPS_COM_FLAG	EQU	6		com (0) or player (1)
PS_COM_FLAG	EQU	01000000B
BPS_IN_GAME	EQU	5		player in play for system
PS_IN_GAME	EQU	00100000B
BPS_HK3_INIT	EQU	0		HK3 system initialize
PS_HK3_INIT	EQU	00000001B




