
#ifndef STATE_CONTROL_CROCODILE_H
#define STATE_CONTROL_CROCODILE_H

#define TR_MODEL_CROCODILE_OF_TR1 10
#define TR_MODEL_CROCODILE_UW_TR1 11

/*
 *  ====== CROCODILE'S ANIMATIONS ======
 */
#define TR_ANIMATION_CROCODILE_UW_FLOW 0
#define TR_ANIMATION_CROCODILE_UW_DEAD 4
#define TR_ANIMATION_CROCODILE_OF_STAY 0
#define TR_ANIMATION_CROCODILE_OF_DEAD 11

//   ====== CROCODILE'S STATES ======
#define TR_STATE_CROCODILE_UW_FLOW 1     // -> 2
#define TR_STATE_CROCODILE_UW_ATTACK 2   // -> 1
#define TR_STATE_CROCODILE_UW_DEAD 3

#define TR_STATE_CROCODILE_STAY 1 // -> 2 -> 3 -> 4 -> 5
#define TR_STATE_CROCODILE_RUN 2  // -> 1 -> 3
#define TR_STATE_CROCODILE_WALK 3 // -> 1 -> 2
#define TR_STATE_CROCODILE_RUN_RIGHT 4 // -> 3
#define TR_STATE_CROCODILE_ATTACK 5
#define TR_STATE_CROCODILE_DEAD 7

#endif
