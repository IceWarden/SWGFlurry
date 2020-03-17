/*
 *	autogen/server/zone/objects/player/sessions/InterplanetarySurveyDroidSession.h generated by engine3 IDL compiler 0.70
 */

#ifndef INTERPLANETARYSURVEYDROIDSESSION_H_
#define INTERPLANETARYSURVEYDROIDSESSION_H_

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
namespace tool {

class SurveyTool;

class SurveyToolPOD;

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

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

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "engine/log/Logger.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class InterplanetarySurveyDroidSession : public Facade {
public:
	InterplanetarySurveyDroidSession(CreatureObject* parent);

	void setPlanet(String& planet);

	String getPlanet();

	void setTool(SurveyTool* t);

	int clearSession();

	int cancelSession();

	bool hasSurveyTool();

	void initalizeDroid(TangibleObject* droid);

	void handleMenuSelect(CreatureObject* pl, unsigned long long menuID, SuiListBox* suiBox);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	InterplanetarySurveyDroidSession(DummyConstructorParameter* param);

	virtual ~InterplanetarySurveyDroidSession();

	friend class InterplanetarySurveyDroidSessionHelper;
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

class InterplanetarySurveyDroidSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > player;

	ManagedWeakReference<TangibleObject* > droidObject;

	String targetPlanet;

	ManagedWeakReference<SurveyTool* > toolObject;

	ManagedReference<SuiListBox* > droidSuiBox;

	byte step;

public:
	InterplanetarySurveyDroidSessionImplementation(CreatureObject* parent);

	InterplanetarySurveyDroidSessionImplementation(DummyConstructorParameter* param);

	void setPlanet(String& planet);

	String getPlanet();

	void setTool(SurveyTool* t);

	int clearSession();

	int cancelSession();

	bool hasSurveyTool();

	void initalizeDroid(TangibleObject* droid);

	void handleMenuSelect(CreatureObject* pl, unsigned long long menuID, SuiListBox* suiBox);

	WeakReference<InterplanetarySurveyDroidSession*> _this;

	operator const InterplanetarySurveyDroidSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~InterplanetarySurveyDroidSessionImplementation();

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

	friend class InterplanetarySurveyDroidSession;
};

class InterplanetarySurveyDroidSessionAdapter : public FacadeAdapter {
public:
	InterplanetarySurveyDroidSessionAdapter(InterplanetarySurveyDroidSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setPlanet(String& planet);

	String getPlanet();

	void setTool(SurveyTool* t);

	int clearSession();

	int cancelSession();

	bool hasSurveyTool();

};

class InterplanetarySurveyDroidSessionHelper : public DistributedObjectClassHelper, public Singleton<InterplanetarySurveyDroidSessionHelper> {
	static InterplanetarySurveyDroidSessionHelper* staticInitializer;

public:
	InterplanetarySurveyDroidSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<InterplanetarySurveyDroidSessionHelper>;
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

class InterplanetarySurveyDroidSessionPOD : public FacadePOD {
public:
	Optional<ManagedWeakReference<CreatureObjectPOD* >> player;

	Optional<String> targetPlanet;

	Optional<ManagedReference<SuiListBoxPOD* >> droidSuiBox;

	Optional<byte> step;

	String _className;
	InterplanetarySurveyDroidSessionPOD();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~InterplanetarySurveyDroidSessionPOD();

};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*INTERPLANETARYSURVEYDROIDSESSIONPOD_H_*/
