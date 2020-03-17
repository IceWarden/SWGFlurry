/*
 *	autogen/server/zone/objects/creature/VehicleObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef VEHICLEOBJECT_H_
#define VEHICLEOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "system/util/Optional.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
#include "engine/util/json_utils.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

class TangibleObjectPOD;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

class SceneObjectPOD;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/scene/SceneObjectType.h"

#include "templates/SharedObjectTemplate.h"

#include "engine/service/proto/BasePacket.h"

#include "server/zone/objects/creature/CreatureObject.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class VehicleObject : public CreatureObject {
public:
	static const int PAINTCHARGES = 999;

	VehicleObject();

	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Sends BasePacket msg to the owner of this object, needs to be overriden
	 * @pre { }
	 * @post {owner of this object received message, message is deleted }
	 * @param msg BasePacket to be sent
	 */
	void sendMessage(BasePacket* msg);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	bool checkInRangeGarage();

	/**
	 * Inserts this object into zone
	 * @pre { this object is locked }
	 * @post { this object is locked and inserted into zone }
	 * @param zone Zone object where this object will be inserted
	 */
	void notifyInsertToZone(Zone* zone);

	/**
	 * Sets a new posture
	 * @pre { this object is locked }
	 * @post {this object is locked, this object has the new posture set }
	 * @param newPosture posture to set
	 * @param notifyClient if set true the client will be updated with the changes
	 */
	void setPosture(int newPosture, bool notifyClient = true);

	/**
	 * Inflicts damage into the object
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @return unused for now
	 */
	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true, bool isCombatAction = false);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, const String& xp, bool notifyClient = true, bool isCombatAction = false);

	/**
	 * Heals damage
	 * @pre { this, healer locked }
	 * @post { this, healer locked }
	 */
	int healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient = true);

	/**
	 * Heals wounds
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	int healWound(TangibleObject* healer, int damageType, int damage, bool notifyClient = true, bool notifyObservers = true);

	/**
	 * adds wounds
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	int addWounds(int type, int value, bool notifyClient = true, bool doShockWounds = true);

	/**
	 * Updates a specific type of wound
	 * @pre { this object is locked }
	 * @post { this object is locked, }
	 */
	void setWounds(int type, int value, bool notifyClient = true);

	/**
	 * Adds a SceneObject to the defender vector
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is in the defender vector }
	 * @param defender SceneObject to add to the defender vector
	 */
	void addDefender(SceneObject* defender);

	/**
	 * Removes the specified defender from the defender vector
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is not in the defender vector }
	 * @param defender SceneObject to remove from the defender vector
	 */
	void removeDefender(SceneObject* defender);

	/**
	 * Sets the active defender
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is active }
	 * @param defender SceneObject to set as the active defender
	 */
	void setDefender(SceneObject* defender);

	/**
	 * Evaluates if this object can be attacked by the passed creature object
	 * @pre { }
	 * @post { }
	 * @return returns true if the creature object can attack this
	 */
	bool isAttackableBy(CreatureObject* object);

	/**
	 * Is called when this object is destroyed
	 * @pre { this, attacker locked }
	 * @post { this, attacker locked }
	 */
	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition, bool isCombatAction);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Attempts to see if the vehicle can be repaired. If tests are passed, then it sends the confirmation box to the player.
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player that is repairing the vehicle.
	 */
	void repairVehicle(CreatureObject* player);

	int calculateRepairCost(CreatureObject* player);

	void sendRepairConfirmTo(CreatureObject* player);

	void refreshPaint();

	int getPaintCount() const;

	bool isVehicleObject();

	unsigned int getArmor();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	VehicleObject(DummyConstructorParameter* param);

	virtual ~VehicleObject();

	bool __isVehicleObject();

	friend class VehicleObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class VehicleObjectImplementation : public CreatureObjectImplementation {
protected:
	int vehicleType;

	int paintCount;

public:
	static const int PAINTCHARGES = 999;

	VehicleObjectImplementation();

	VehicleObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Sends BasePacket msg to the owner of this object, needs to be overriden
	 * @pre { }
	 * @post {owner of this object received message, message is deleted }
	 * @param msg BasePacket to be sent
	 */
	void sendMessage(BasePacket* msg);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	bool checkInRangeGarage();

	/**
	 * Inserts this object into zone
	 * @pre { this object is locked }
	 * @post { this object is locked and inserted into zone }
	 * @param zone Zone object where this object will be inserted
	 */
	void notifyInsertToZone(Zone* zone);

	/**
	 * Sets a new posture
	 * @pre { this object is locked }
	 * @post {this object is locked, this object has the new posture set }
	 * @param newPosture posture to set
	 * @param notifyClient if set true the client will be updated with the changes
	 */
	void setPosture(int newPosture, bool notifyClient = true);

	/**
	 * Inflicts damage into the object
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @return unused for now
	 */
	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient = true, bool isCombatAction = false);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, const String& xp, bool notifyClient = true, bool isCombatAction = false);

	/**
	 * Heals damage
	 * @pre { this, healer locked }
	 * @post { this, healer locked }
	 */
	int healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient = true);

	/**
	 * Heals wounds
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	int healWound(TangibleObject* healer, int damageType, int damage, bool notifyClient = true, bool notifyObservers = true);

	/**
	 * adds wounds
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	int addWounds(int type, int value, bool notifyClient = true, bool doShockWounds = true);

	/**
	 * Updates a specific type of wound
	 * @pre { this object is locked }
	 * @post { this object is locked, }
	 */
	void setWounds(int type, int value, bool notifyClient = true);

	/**
	 * Adds a SceneObject to the defender vector
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is in the defender vector }
	 * @param defender SceneObject to add to the defender vector
	 */
	void addDefender(SceneObject* defender);

	/**
	 * Removes the specified defender from the defender vector
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is not in the defender vector }
	 * @param defender SceneObject to remove from the defender vector
	 */
	void removeDefender(SceneObject* defender);

	/**
	 * Sets the active defender
	 * @pre { this object is locked }
	 * @post { this object is locked, defender is active }
	 * @param defender SceneObject to set as the active defender
	 */
	void setDefender(SceneObject* defender);

	/**
	 * Evaluates if this object can be attacked by the passed creature object
	 * @pre { }
	 * @post { }
	 * @return returns true if the creature object can attack this
	 */
	bool isAttackableBy(CreatureObject* object);

	/**
	 * Is called when this object is destroyed
	 * @pre { this, attacker locked }
	 * @post { this, attacker locked }
	 */
	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition, bool isCombatAction);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Attempts to see if the vehicle can be repaired. If tests are passed, then it sends the confirmation box to the player.
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player that is repairing the vehicle.
	 */
	void repairVehicle(CreatureObject* player);

	int calculateRepairCost(CreatureObject* player);

	void sendRepairConfirmTo(CreatureObject* player);

	void refreshPaint();

	int getPaintCount() const;

	bool isVehicleObject();

	unsigned int getArmor();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	WeakReference<VehicleObject*> _this;

	operator const VehicleObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~VehicleObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class VehicleObject;
};

class VehicleObjectAdapter : public CreatureObjectAdapter {
public:
	VehicleObjectAdapter(VehicleObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool checkInRangeGarage();

	void notifyInsertToZone(Zone* zone);

	void setPosture(int newPosture, bool notifyClient);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, bool notifyClient, bool isCombatAction);

	int inflictDamage(TangibleObject* attacker, int damageType, float damage, bool destroy, const String& xp, bool notifyClient, bool isCombatAction);

	int healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient);

	int healWound(TangibleObject* healer, int damageType, int damage, bool notifyClient, bool notifyObservers);

	int addWounds(int type, int value, bool notifyClient, bool doShockWounds);

	void setWounds(int type, int value, bool notifyClient);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	void setDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition, bool isCombatAction);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void repairVehicle(CreatureObject* player);

	int calculateRepairCost(CreatureObject* player);

	void sendRepairConfirmTo(CreatureObject* player);

	void refreshPaint();

	int getPaintCount() const;

	unsigned int getArmor();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

};

class VehicleObjectHelper : public DistributedObjectClassHelper, public Singleton<VehicleObjectHelper> {
	static VehicleObjectHelper* staticInitializer;

public:
	VehicleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<VehicleObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class VehicleObjectPOD : public CreatureObjectPOD {
public:
	Optional<int> vehicleType;

	Optional<int> paintCount;

	String _className;
	VehicleObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~VehicleObjectPOD();

};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*VEHICLEOBJECTPOD_H_*/
