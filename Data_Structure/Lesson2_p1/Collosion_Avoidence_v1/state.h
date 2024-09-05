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
#endif /* STATE_H_ */
