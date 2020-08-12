#ifndef GUNMOD_H
#define GUNMOD_H

extern cvar_t mp_adminpass;

void ADMIN_RegisterCVars( void );
void ADMIN_InitAdmins( void );
BOOL ADMIN_IsAdmin( edict_t *player );
void ADMIN_AddAdmin( edict_t *player );
void ADMIN_Login( edict_t *pPlayer );
BOOL ADMIN_ClientCommand( CBasePlayer *pPlayer, const char *pCmd );

#endif
