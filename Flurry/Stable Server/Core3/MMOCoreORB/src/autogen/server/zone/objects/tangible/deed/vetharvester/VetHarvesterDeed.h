/*
 *	autogen/server/zone/objects/tangible/deed/vetharvester/VetHarvesterDeed.h generated by engine3 IDL compiler 0.70
 */

#ifndef VETHARVESTERDEED_H_
#define VETHARVESTERDEED_H_

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/objects/tangible/deed/Deed.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace resource {

class VetHarvesterDeed : public Deed {
public:
	VetHarvesterDeed();

	void initializeTransientMembers();

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int useObject(CreatureObject* player);

	/**
	 * Removes this object from parent container
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 */
	void destroyDeed();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	VetHarvesterDeed(DummyConstructorParameter* param);

	virtual ~VetHarvesterDeed();

	friend class VetHarvesterDeedHelper;
};

} // namespace resource
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::resource;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace resource {

class VetHarvesterDeedImplementation : public DeedImplementation {

public:
	VetHarvesterDeedImplementation();

	VetHarvesterDeedImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int useObject(CreatureObject* player);

	/**
	 * Removes this object from parent container
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 */
	void destroyDeed();

	WeakReference<VetHarvesterDeed*> _this;

	operator const VetHarvesterDeed*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~VetHarvesterDeedImplementation();

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

	friend class VetHarvesterDeed;
};

class VetHarvesterDeedAdapter : public DeedAdapter {
public:
	VetHarvesterDeedAdapter(VetHarvesterDeed* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int useObject(CreatureObject* player);

	void destroyDeed();

};

class VetHarvesterDeedHelper : public DistributedObjectClassHelper, public Singleton<VetHarvesterDeedHelper> {
	static VetHarvesterDeedHelper* staticInitializer;

public:
	VetHarvesterDeedHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<VetHarvesterDeedHelper>;
};

} // namespace resource
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::resource;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace resource {

class VetHarvesterDeedPOD : public DeedPOD {
public:

	VetHarvesterDeedPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~VetHarvesterDeedPOD();

};

} // namespace resource
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::resource;

#endif /*VETHARVESTERDEEDPOD_H_*/
