/*
 *	autogen/server/zone/managers/director/PersistentEvent.h generated by engine3 IDL compiler 0.70
 */

#ifndef PERSISTENTEVENT_H_
#define PERSISTENTEVENT_H_

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
namespace managers {
namespace director {

class ScreenPlayTask;

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace managers {
namespace director {

class PersistentEvent : public ManagedObject {
public:
	PersistentEvent();

	void setScreenplayTask(ScreenPlayTask* task);

	WeakReference<ScreenPlayTask* > getScreenplayTask() const;

	unsigned long long getMiliDiff() const;

	const String getKey() const;

	const String getScreenplay() const;

	const String getArgs() const;

	ManagedWeakReference<SceneObject* > getObject() const;

	unsigned long long getCurTime() const;

	const String getEventName() const;

	void setEventName(const String& en);

	void setCurTime(unsigned long long time);

	void setMiliDiff(unsigned long long mdiff);

	void setKey(const String& k);

	void setScreenplay(const String& sp);

	void setArgs(const String& ar);

	void setObject(SceneObject* o);

	void setEventExecuted(bool val);

	void loadTransientTask();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PersistentEvent(DummyConstructorParameter* param);

	virtual ~PersistentEvent();

	friend class PersistentEventHelper;
};

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

namespace server {
namespace zone {
namespace managers {
namespace director {

class PersistentEventImplementation : public ManagedObjectImplementation {
protected:
	int timeStamp;

	unsigned long long miliDiff;

	unsigned long long curTime;

	String key;

	String play;

	String args;

	String eventName;

	bool eventExecuted;

	WeakReference<ScreenPlayTask* > screenplayTask;

	ManagedWeakReference<SceneObject* > obj;

public:
	PersistentEventImplementation();

	PersistentEventImplementation(DummyConstructorParameter* param);

	void setScreenplayTask(ScreenPlayTask* task);

	WeakReference<ScreenPlayTask* > getScreenplayTask() const;

	unsigned long long getMiliDiff() const;

	const String getKey() const;

	const String getScreenplay() const;

	const String getArgs() const;

	ManagedWeakReference<SceneObject* > getObject() const;

	unsigned long long getCurTime() const;

	const String getEventName() const;

	void setEventName(const String& en);

	void setCurTime(unsigned long long time);

	void setMiliDiff(unsigned long long mdiff);

	void setKey(const String& k);

	void setScreenplay(const String& sp);

	void setArgs(const String& ar);

	void setObject(SceneObject* o);

	void setEventExecuted(bool val);

	void loadTransientTask();

	WeakReference<PersistentEvent*> _this;

	operator const PersistentEvent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~PersistentEventImplementation();

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

	friend class PersistentEvent;
};

class PersistentEventAdapter : public ManagedObjectAdapter {
public:
	PersistentEventAdapter(PersistentEvent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned long long getMiliDiff() const;

	const String getKey() const;

	const String getScreenplay() const;

	const String getArgs() const;

	ManagedWeakReference<SceneObject* > getObject() const;

	unsigned long long getCurTime() const;

	const String getEventName() const;

	void setEventName(const String& en);

	void setCurTime(unsigned long long time);

	void setMiliDiff(unsigned long long mdiff);

	void setKey(const String& k);

	void setScreenplay(const String& sp);

	void setArgs(const String& ar);

	void setObject(SceneObject* o);

	void setEventExecuted(bool val);

	void loadTransientTask();

};

class PersistentEventHelper : public DistributedObjectClassHelper, public Singleton<PersistentEventHelper> {
	static PersistentEventHelper* staticInitializer;

public:
	PersistentEventHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PersistentEventHelper>;
};

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

namespace server {
namespace zone {
namespace managers {
namespace director {

class PersistentEventPOD : public ManagedObjectPOD {
public:
	Optional<int> timeStamp;

	Optional<unsigned long long> miliDiff;

	Optional<unsigned long long> curTime;

	Optional<String> key;

	Optional<String> play;

	Optional<String> args;

	Optional<String> eventName;

	Optional<bool> eventExecuted;

	Optional<ManagedWeakReference<SceneObjectPOD* >> obj;

	String _className;
	PersistentEventPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~PersistentEventPOD();

};

} // namespace director
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::director;

#endif /*PERSISTENTEVENTPOD_H_*/
