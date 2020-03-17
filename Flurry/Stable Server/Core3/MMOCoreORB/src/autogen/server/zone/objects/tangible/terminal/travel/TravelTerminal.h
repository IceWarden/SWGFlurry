/*
 *	autogen/server/zone/objects/tangible/terminal/travel/TravelTerminal.h generated by engine3 IDL compiler 0.70
 */

#ifndef TRAVELTERMINAL_H_
#define TRAVELTERMINAL_H_

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

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

class PlanetManagerPOD;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

#include "server/zone/managers/planet/PlanetTravelPoint.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace travel {

class TravelTerminal : public Terminal {
public:
	TravelTerminal();

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Return the planetTravelPoint for this Travel Terminal
	 *
	 * NOTE: Resolution of the planetTravelPoint is delayed so the PlanetTravelPoints can get properly updated as objects load
	 */
	PlanetTravelPoint* getPlanetTravelPoint();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TravelTerminal(DummyConstructorParameter* param);

	virtual ~TravelTerminal();

	friend class TravelTerminalHelper;
};

} // namespace travel
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::travel;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace travel {

class TravelTerminalImplementation : public TerminalImplementation {
	Reference<PlanetTravelPoint* > planetTravelPoint;

public:
	TravelTerminalImplementation();

	TravelTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Return the planetTravelPoint for this Travel Terminal
	 *
	 * NOTE: Resolution of the planetTravelPoint is delayed so the PlanetTravelPoints can get properly updated as objects load
	 */
	PlanetTravelPoint* getPlanetTravelPoint();

	WeakReference<TravelTerminal*> _this;

	operator const TravelTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~TravelTerminalImplementation();

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

	friend class TravelTerminal;
};

class TravelTerminalAdapter : public TerminalAdapter {
public:
	TravelTerminalAdapter(TravelTerminal* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyInsertToZone(Zone* zone);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

};

class TravelTerminalHelper : public DistributedObjectClassHelper, public Singleton<TravelTerminalHelper> {
	static TravelTerminalHelper* staticInitializer;

public:
	TravelTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TravelTerminalHelper>;
};

} // namespace travel
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::travel;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace travel {

class TravelTerminalPOD : public TerminalPOD {
public:
	String _className;
	TravelTerminalPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~TravelTerminalPOD();

};

} // namespace travel
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::travel;

#endif /*TRAVELTERMINALPOD_H_*/
