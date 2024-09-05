/*
 * state.h
 *
 *  Created on: Sep 5, 2024
 *      Author: DELL
 */

#ifndef STATE_H_
#define STATE_H_
#define STATE_DEFINE(_statefun_) void ST_##_statefun_()
#define STATE(_statefun_) ST_##_statefun_

void SIG_DIs_Trans(int Transfered_Distance);
void SIG_SPD_Trans(int Transfered_Speed);
#endif /* STATE_H_ */
