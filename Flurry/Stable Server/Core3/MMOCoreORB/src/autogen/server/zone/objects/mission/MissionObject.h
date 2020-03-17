/*
 *	autogen/server/zone/objects/mission/MissionObject.h generated by engine3 IDL compiler 0.70
 */

#ifndef MISSIONOBJECT_H_
#define MISSIONOBJECT_H_

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
namespace waypoint {

class WaypointObject;

class WaypointObjectPOD;

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

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
namespace mission {

class MissionObjective;

class MissionObjectivePOD;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace managers {
namespace mission {
namespace spawnmaps {

class NpcSpawnPoint;

} // namespace spawnmaps
} // namespace mission
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::mission::spawnmaps;

#include "server/zone/objects/scene/variables/StringId.h"

#include "templates/SharedObjectTemplate.h"

#include "templates/TemplateReference.h"

#include "server/zone/objects/mission/MissionTypes.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "templates/faction/Factions.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject : public IntangibleObject {
public:
	MissionObject();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	WaypointObject* createWaypoint();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Updates this object and childre objects to database
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param startTask if true, queues a new update task
	 */
	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient = true);

	void setTypeCRC(unsigned int crc, bool notifyClient = true);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient = true);

	void setMissionTitle(const String& file, const String& id, bool notifyClient = true);

	void setMissionTargetName(const String& target, bool notifyClient = true);

	void setMissionDifficulty(int diffLevel, bool notifyClient = true);

	void setMissionDifficulty(int diffLevel, int display, int diff, bool notifyClient = true);

	void setRewardCredits(int creds, bool notifyClient = true);

	void setTargetTemplate(SharedObjectTemplate* templ, bool notifyClient = true);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setStartPosition(float posX, float posY, bool notifyClient = true);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setCreatorName(const String& name, bool notifyClient = true);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	unsigned int getFaction() const;

	int getRewardFactionPointsRebel() const;

	int getRewardFactionPointsImperial() const;

	float getStartPositionX() const;

	float getStartPositionY() const;

	String getTargetOptionalTemplate() const;

	String getStartPlanet() const;

	float getEndPositionX() const;

	float getEndPositionY() const;

	String getEndPlanet() const;

	void setEndPlanet(const String& newEndPlanet);

	WaypointObject* getWaypointToMission();

	unsigned int getTypeCRC() const;

	int getRewardCredits() const;

	int getRewardCreditsDivisor() const;

	UnicodeString getCreatorName() const;

	int getDifficultyLevel() const;

	int getDifficultyDisplay() const;

	int getDifficulty() const;

	StringId* getMissionDescription();

	StringId* getMissionTitle();

	String getTargetName() const;

	int getRefreshCounter() const;

	int getMissionNumber() const;

	SharedObjectTemplate* getTargetTemplate();

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1() const;

	String getTemplateString2() const;

	unsigned long long getTargetObjectId() const;

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

	void setSize(float siz);

	float getSize() const;

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionObject(DummyConstructorParameter* param);

	virtual ~MissionObject();

	friend class MissionObjectHelper;
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

class MissionObjectImplementation : public IntangibleObjectImplementation {
protected:
	ManagedReference<WaypointObject* > waypointToMission;

	ManagedReference<MissionObjective* > missionObjective;

	unsigned int typeCRC;

	int difficultyLevel;

	int difficultyDisplay;

	int difficulty;

	UnicodeString creatorName;

	int rewardCredits;

	int rewardCreditsDivisor;

	int rewardFactionPointsRebel;

	int rewardFactionPointsImperial;

	int missionNumber;

	unsigned int faction;

	int missionLevel;

	float size;

	float startPositionX;

	float startPositionY;

	String startPlanet;

	float endPositionX;

	float endPositionY;

	String endPlanet;

	unsigned long long targetObjectId;

	StringId missionDescription;

	StringId missionTitle;

	unsigned int refreshCounter;

	String targetName;

	String templateString1;

	String templateString2;

	TemplateReference<SharedObjectTemplate*> targetTemplate;

	String targetOptionalTemplate;

public:
	MissionObjectImplementation();

	MissionObjectImplementation(DummyConstructorParameter* param);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	WaypointObject* createWaypoint();

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	/**
	 * Updates this object and childre objects to database
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param startTask if true, queues a new update task
	 */
	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient = true);

	void setTypeCRC(unsigned int crc, bool notifyClient = true);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient = true);

	void setMissionTitle(const String& file, const String& id, bool notifyClient = true);

	void setMissionTargetName(const String& target, bool notifyClient = true);

	void setMissionDifficulty(int diffLevel, bool notifyClient = true);

	void setMissionDifficulty(int diffLevel, int display, int diff, bool notifyClient = true);

	void setRewardCredits(int creds, bool notifyClient = true);

	void setTargetTemplate(SharedObjectTemplate* templ, bool notifyClient = true);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setStartPosition(float posX, float posY, bool notifyClient = true);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient = true);

	void setCreatorName(const String& name, bool notifyClient = true);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	unsigned int getFaction() const;

	int getRewardFactionPointsRebel() const;

	int getRewardFactionPointsImperial() const;

	float getStartPositionX() const;

	float getStartPositionY() const;

	String getTargetOptionalTemplate() const;

	String getStartPlanet() const;

	float getEndPositionX() const;

	float getEndPositionY() const;

	String getEndPlanet() const;

	void setEndPlanet(const String& newEndPlanet);

	WaypointObject* getWaypointToMission();

	unsigned int getTypeCRC() const;

	int getRewardCredits() const;

	int getRewardCreditsDivisor() const;

	UnicodeString getCreatorName() const;

	int getDifficultyLevel() const;

	int getDifficultyDisplay() const;

	int getDifficulty() const;

	StringId* getMissionDescription();

	StringId* getMissionTitle();

	String getTargetName() const;

	int getRefreshCounter() const;

	int getMissionNumber() const;

	SharedObjectTemplate* getTargetTemplate();

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1() const;

	String getTemplateString2() const;

	unsigned long long getTargetObjectId() const;

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

	void setSize(float siz);

	float getSize() const;

	WeakReference<MissionObject*> _this;

	operator const MissionObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	virtual void writeJSON(nlohmann::json& j);
protected:
	virtual ~MissionObjectImplementation();

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

	friend class MissionObject;
};

class MissionObjectAdapter : public IntangibleObjectAdapter {
public:
	MissionObjectAdapter(MissionObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	WaypointObject* createWaypoint();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void updateToDatabaseAllObjects(bool startTask);

	void setRefreshCounter(int ctr, bool notifyClient);

	void setTypeCRC(unsigned int crc, bool notifyClient);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void setMissionDescription(const String& file, const String& id, bool notifyClient);

	void setMissionTitle(const String& file, const String& id, bool notifyClient);

	void setMissionTargetName(const String& target, bool notifyClient);

	void setMissionDifficulty(int diffLevel, bool notifyClient);

	void setMissionDifficulty(int diffLevel, int display, int diff, bool notifyClient);

	void setRewardCredits(int creds, bool notifyClient);

	void setStartPosition(float posX, float posY, const String& planet, bool notifyClient);

	void setStartPosition(float posX, float posY, bool notifyClient);

	void setEndPosition(float posX, float posY, const String& planet, bool notifyClient);

	void setCreatorName(const String& name, bool notifyClient);

	unsigned int getStartPlanetCRC();

	void updateMissionLocation();

	void abort();

	void setFaction(const int missionFaction);

	void setMissionObjective(MissionObjective* obj);

	void setRewardFactionPointsRebel(int points);

	void setRewardFactionPointsImperial(int points);

	void setMissionNumber(int num);

	void setTargetOptionalTemplate(const String& tml);

	void setTemplateStrings(const String& temp1, const String& temp2);

	MissionObjective* getMissionObjective();

	unsigned int getFaction() const;

	int getRewardFactionPointsRebel() const;

	int getRewardFactionPointsImperial() const;

	float getStartPositionX() const;

	float getStartPositionY() const;

	String getTargetOptionalTemplate() const;

	String getStartPlanet() const;

	float getEndPositionX() const;

	float getEndPositionY() const;

	String getEndPlanet() const;

	void setEndPlanet(const String& newEndPlanet);

	WaypointObject* getWaypointToMission();

	unsigned int getTypeCRC() const;

	int getRewardCredits() const;

	int getRewardCreditsDivisor() const;

	UnicodeString getCreatorName() const;

	int getDifficultyLevel() const;

	int getDifficultyDisplay() const;

	int getDifficulty() const;

	String getTargetName() const;

	int getRefreshCounter() const;

	int getMissionNumber() const;

	bool isSurveyMission();

	bool isMissionObject();

	String getTemplateString1() const;

	String getTemplateString2() const;

	unsigned long long getTargetObjectId() const;

	void setTargetObjectId(unsigned long long id);

	void setMissionLevel(int level);

	int getMissionLevel();

	void setSize(float siz);

	float getSize() const;

};

class MissionObjectHelper : public DistributedObjectClassHelper, public Singleton<MissionObjectHelper> {
	static MissionObjectHelper* staticInitializer;

public:
	MissionObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectPOD* instantiatePOD();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionObjectHelper>;
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

class MissionObjectPOD : public IntangibleObjectPOD {
public:
	Optional<ManagedReference<WaypointObjectPOD* >> waypointToMission;

	Optional<ManagedReference<MissionObjectivePOD* >> missionObjective;

	Optional<unsigned int> typeCRC;

	Optional<int> difficultyLevel;

	Optional<int> difficultyDisplay;

	Optional<int> difficulty;

	Optional<UnicodeString> creatorName;

	Optional<int> rewardCredits;

	Optional<int> rewardCreditsDivisor;

	Optional<int> rewardFactionPointsRebel;

	Optional<int> rewardFactionPointsImperial;

	Optional<int> missionNumber;

	Optional<unsigned int> faction;

	Optional<int> missionLevel;

	Optional<float> size;

	Optional<float> startPositionX;

	Optional<float> startPositionY;

	Optional<String> startPlanet;

	Optional<float> endPositionX;

	Optional<float> endPositionY;

	Optional<String> endPlanet;

	Optional<unsigned long long> targetObjectId;

	Optional<StringId> missionDescription;

	Optional<StringId> missionTitle;

	Optional<unsigned int> refreshCounter;

	Optional<String> targetName;

	Optional<String> templateString1;

	Optional<String> templateString2;

	Optional<TemplateReference<SharedObjectTemplate*>> targetTemplate;

	Optional<String> targetOptionalTemplate;

	String _className;
	MissionObjectPOD();
	virtual void writeJSON(nlohmann::json& j);
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);
	void writeObjectCompact(ObjectOutputStream* stream);



	virtual ~MissionObjectPOD();

};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*MISSIONOBJECTPOD_H_*/
