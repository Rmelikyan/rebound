/**
 * @file 	integrator_bs.h
 * @brief 	Interface for numerical particle integrator
 * @author 	Hanno Rein <hanno@hanno-rein.de>
 * 
 * @section 	LICENSE
 * Copyright (c) 2021 Hanno Rein
 *
 * This file is part of rebound.
 *
 * rebound is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * rebound is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with rebound.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef _INTEGRATOR_BS_H
#define _INTEGRATOR_BS_H
void reb_integrator_bs_part1(struct reb_simulation* r);          ///< Internal function used to call a specific integrator
void reb_integrator_bs_part2(struct reb_simulation* r);          ///< Internal function used to call a specific integrator
void reb_integrator_bs_synchronize(struct reb_simulation* r);    ///< Internal function used to call a specific integrator
void reb_integrator_bs_reset(struct reb_simulation* r);          ///< Internal function used to call a specific integrator
void reb_integrator_bs_reset_struct(struct reb_integrator_bs* ri_bs);
int reb_integrator_bs_step(struct reb_simulation* r, double dt);
void reb_integrator_bs_update_particles(struct reb_simulation* r, const double* y);
#endif
