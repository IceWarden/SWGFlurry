/*
 *	autogen/server/zone/objects/intangible/VehicleControlDevice.h generated by engine3 IDL compiler 0.70
 */

#ifndef VEHICLECONTROLDEVICE_H_
#define VEHICLECONTROLDEVICE_H_

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
namespace creature {

class CreatureObject;

class CreatureObjectPOD;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

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
namespace objects {
namespace intangible {

class VehicleControlObserver;

class VehicleControlObserverPOD;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#include "server/zone/managers/radial/RadialOptions.h"

#include "server/zone/objects/intangible/ControlDevice.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class VehicleControlDevice : public ControlDevice {
public:
	VehicleControlDevice();

	void storeObject(CreatureObject* player, bool force = false);

	void generateObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Checks if the object can be destroyed
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @returns 0 on succes, != 0 on error
	 */
	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isVehicleControlDevice();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	VehicleControlDevice(DummyConstructorParameter* param);

	virtual ~VehicleControlDevice();

	friend class VehicleControlDeviceHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class VehicleControlDeviceImplementation : public ControlDeviceImplementation {
	ManagedReference<VehicleControlObserver* > vehicleControlObserver;

public:
	VehicleControlDeviceImplementation();

	VehicleControlDeviceImplementation(DummyConstructorParameter* param);

	void storeObject(CreatureObject* player, bool force = false);

	void generateObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Checks if the object can be destroyed
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @returns 0 on succes, != 0 on error
	 */
	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isVehicleControlDevice();

	WeakReference<VehicleControlDevice*> _this;

	operator const VehicleControlDevice*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~VehicleControlDeviceImplementation();

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

	friend class VehicleControlDevice;
};

class VehicleControlDeviceAdapter : public ControlDeviceAdapter {
public:
	VehicleControlDeviceAdapter(VehicleControlDevice* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void storeObject(CreatureObject* player, bool force);

	void generateObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	bool isVehicleControlDevice();

};

class VehicleControlDeviceHelper : public DistributedObjectClassHelper, public Singleton<VehicleControlDeviceHelper> {
	static VehicleControlDeviceHelper* staticInitializer;

public:
	VehicleControlDeviceHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<VehicleControlDeviceHelper>;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class VehicleControlDevicePOD : public ControlDevicePOD {
public:
	Optional<ManagedReference<VehicleControlObserverPOD* >> vehicleControlObserver;

	String _className;
	VehicleControlDevicePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~VehicleControlDevicePOD();

};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*VEHICLECONTROLDEVICEPOD_H_*/
