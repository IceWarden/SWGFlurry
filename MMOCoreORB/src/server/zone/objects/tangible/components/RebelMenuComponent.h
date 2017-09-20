/*
 * RebelMenuComponent.h
 *
 *  Created on: 09/19/2017
 *      Author: TOXIC
 */

#ifndef REBELMENUCOMPONENT_H_
#define REBELMENUCOMPONENT_H_

#include "TangibleObjectMenuComponent.h"

class RebelMenuComponent : public TangibleObjectMenuComponent {
public:
	int handleObjectMenuSelect(SceneObject* sceneObject, CreatureObject* player, byte selectedID) const;
};


#endif /* REBELMENUCOMPONENT_H_ */