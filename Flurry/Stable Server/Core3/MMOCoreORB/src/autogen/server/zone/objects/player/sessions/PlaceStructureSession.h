/*
 *	autogen/server/zone/objects/player/sessions/PlaceStructureSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef PLACESTRUCTURESESSION_H_
#define PLACESTRUCTURESESSION_H_

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
namespace objects {
namespace tangible {
namespace deed {
namespace structure {

class StructureDeed;

class StructureDeedPOD;

} // namespace structure
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::structure;

namespace server {
namespace zone {

class Zone;

class ZonePOD;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

class ActiveAreaPOD;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "templates/tangible/SharedStructureObjectTemplate.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlaceStructureSession : public Facade {
public:
	PlaceStructureSession(CreatureObject* creature, StructureDeed* deed);

	int initializeSession();

	void placeTemporaryNoBuildZone(const SharedStructureObjectTemplate* serverTemplate);

	void removeTemporaryNoBuildZone();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlaceStructureSession(DummyConstructorParameter* param);

	virtual ~PlaceStructureSession();

	friend class PlaceStructureSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlaceStructureSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > creatureObject;

	ManagedWeakReference<StructureDeed* > deedObject;

	float positionX;

	float positionY;

	int directionAngle;

	ManagedWeakReference<SceneObject* > constructionBarricade;

	ManagedWeakReference<Zone* > zone;

	ManagedWeakReference<ActiveArea* > temporaryNoBuildZone;

public:
	PlaceStructureSessionImplementation(CreatureObject* creature, StructureDeed* deed);

	PlaceStructureSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	void placeTemporaryNoBuildZone(const SharedStructureObjectTemplate* serverTemplate);

	void removeTemporaryNoBuildZone();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

	WeakReference<PlaceStructureSession*> _this;

	operator const PlaceStructureSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~PlaceStructureSessionImplementation();

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

	friend class PlaceStructureSession;
};

class PlaceStructureSessionAdapter : public FacadeAdapter {
public:
	PlaceStructureSessionAdapter(PlaceStructureSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	void removeTemporaryNoBuildZone();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

};

class PlaceStructureSessionHelper : public DistributedObjectClassHelper, public Singleton<PlaceStructureSessionHelper> {
	static PlaceStructureSessionHelper* staticInitializer;

public:
	PlaceStructureSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlaceStructureSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlaceStructureSessionPOD : public FacadePOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> creatureObject;

	Optional<ManagedWeakReference<StructureDeedPOD* >> deedObject;

	Optional<float> positionX;

	Optional<float> positionY;

	Optional<int> directionAngle;

	Optional<ManagedWeakReference<SceneObjectPOD* >> constructionBarricade;

	Optional<ManagedWeakReference<ZonePOD* >> zone;

	Optional<ManagedWeakReference<ActiveAreaPOD* >> temporaryNoBuildZone;

	String _className;
	PlaceStructureSessionPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~PlaceStructureSessionPOD();

};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*PLACESTRUCTURESESSIONPOD_H_*/
