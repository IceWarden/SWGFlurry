/*
 *	autogen/server/zone/objects/mission/SurveyMissionObjective.h generated by engine3 IDL compiler 0.70
 */

#ifndef SURVEYMISSIONOBJECTIVE_H_
#define SURVEYMISSIONOBJECTIVE_H_

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
namespace mission {

class MissionObserver;

class MissionObserverPOD;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

class MissionObjectPOD;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

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

#include "engine/util/u3d/Vector3.h"

#include "engine/util/Observable.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class SurveyMissionObjective : public MissionObjective {
public:
	SurveyMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setSpawnFamily(String& spf);

	void setEfficiency(unsigned int eff);

	Vector3 getEndPosition();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SurveyMissionObjective(DummyConstructorParameter* param);

	virtual ~SurveyMissionObjective();

	friend class SurveyMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class SurveyMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	String spawnFamily;

	unsigned int efficiency;

public:
	SurveyMissionObjectiveImplementation(MissionObject* mission);

	SurveyMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setSpawnFamily(String& spf);

	void setEfficiency(unsigned int eff);

	Vector3 getEndPosition();

	WeakReference<SurveyMissionObjective*> _this;

	operator const SurveyMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~SurveyMissionObjectiveImplementation();

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

	friend class SurveyMissionObjective;
};

class SurveyMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	SurveyMissionObjectiveAdapter(SurveyMissionObjective* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void activate();

	void abort();

	void complete();

	int notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void setSpawnFamily(String& spf);

	void setEfficiency(unsigned int eff);

};

class SurveyMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<SurveyMissionObjectiveHelper> {
	static SurveyMissionObjectiveHelper* staticInitializer;

public:
	SurveyMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SurveyMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class SurveyMissionObjectivePOD : public MissionObjectivePOD {
public:
	Optional<String> spawnFamily;

	Optional<unsigned int> efficiency;

	String _className;
	SurveyMissionObjectivePOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~SurveyMissionObjectivePOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*SURVEYMISSIONOBJECTIVEPOD_H_*/
