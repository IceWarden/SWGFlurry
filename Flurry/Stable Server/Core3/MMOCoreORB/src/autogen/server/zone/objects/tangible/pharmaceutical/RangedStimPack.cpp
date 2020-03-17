/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/RangedStimPack.cpp generated by engine3 IDL compiler 0.70
 */

#include "RangedStimPack.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	RangedStimPackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_,RPC_GETRANGE__CREATUREOBJECT_,RPC_GETEFFECTIVENESS__,RPC_GETAREA__,RPC_ISAREA__,RPC_GETRANGEMOD__,RPC_ISRANGEDSTIMPACK__};

RangedStimPack::RangedStimPack() : StimPack(DummyConstructorParameter::instance()) {
	RangedStimPackImplementation* _implementation = new RangedStimPackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RangedStimPack");
}

RangedStimPack::RangedStimPack(DummyConstructorParameter* param) : StimPack(param) {
	_setClassName("RangedStimPack");
}

RangedStimPack::~RangedStimPack() {
}



void RangedStimPack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void RangedStimPack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

int RangedStimPack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void RangedStimPack::loadTemplateData(SharedObjectTemplate* templateData) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

unsigned int RangedStimPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else {
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
	}
}

float RangedStimPack::getRange(CreatureObject* creature) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGE__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getRange(creature);
	}
}

float RangedStimPack::getEffectiveness() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getEffectiveness();
	}
}

float RangedStimPack::getArea() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getArea();
	}
}

bool RangedStimPack::isArea() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISAREA__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isArea();
	}
}

float RangedStimPack::getRangeMod() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGEMOD__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getRangeMod();
	}
}

bool RangedStimPack::isRangedStimPack() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRANGEDSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRangedStimPack();
	}
}

DistributedObjectServant* RangedStimPack::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RangedStimPack::_getImplementationForRead() const {
	return _impl;
}

void RangedStimPack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RangedStimPackImplementation
 */

RangedStimPackImplementation::RangedStimPackImplementation(DummyConstructorParameter* param) : StimPackImplementation(param) {
	_initializeImplementation();
}


RangedStimPackImplementation::~RangedStimPackImplementation() {
}


void RangedStimPackImplementation::finalize() {
}

void RangedStimPackImplementation::_initializeImplementation() {
	_setClassHelper(RangedStimPackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RangedStimPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RangedStimPack*>(stub);
	StimPackImplementation::_setStub(stub);
}

DistributedObjectStub* RangedStimPackImplementation::_getStub() {
	return _this.get();
}

RangedStimPackImplementation::operator const RangedStimPack*() {
	return _this.get();
}

void RangedStimPackImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RangedStimPackImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RangedStimPackImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RangedStimPackImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RangedStimPackImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RangedStimPackImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RangedStimPackImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RangedStimPackImplementation::_serializationHelperMethod() {
	StimPackImplementation::_serializationHelperMethod();

	_setClassName("RangedStimPack");

}

void RangedStimPackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RangedStimPackImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RangedStimPackImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (StimPackImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xddfb8e4d: //RangedStimPack.range
		TypeInfo<float >::parseFromBinaryStream(&range, stream);
		return true;

	case 0xf6628ec4: //RangedStimPack.area
		TypeInfo<float >::parseFromBinaryStream(&area, stream);
		return true;

	case 0xc99d9b82: //RangedStimPack.rangeMod
		TypeInfo<float >::parseFromBinaryStream(&rangeMod, stream);
		return true;

	}

	return false;
}

void RangedStimPackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RangedStimPackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RangedStimPackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = StimPackImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xddfb8e4d; //RangedStimPack.range
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&range, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xf6628ec4; //RangedStimPack.area
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xc99d9b82; //RangedStimPack.rangeMod
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&rangeMod, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

void RangedStimPackImplementation::writeJSON(nlohmann::json& j) {
	StimPackImplementation::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	thisObject["range"] = range;

	thisObject["area"] = area;

	thisObject["rangeMod"] = rangeMod;

	j["RangedStimPack"] = thisObject;
}

RangedStimPackImplementation::RangedStimPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		setLoggingName("RangedStimPack");
	setLoggingName("RangedStimPack");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = 0;
	range = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		rangeMod = 0;
	rangeMod = 0;
}

void RangedStimPackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.effectiveness = values.getCurrentValue("power");
	StimPackImplementation::effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	StimPackImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = values.getCurrentValue("range");
	range = values->getCurrentValue("range");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  	}
	if (values->hasProperty("area")){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			area = values.getCurrentValue("area");
	area = values->getCurrentValue("area");
}
}

int RangedStimPackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		if 
	if (!isASubChildOf(player))	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 0;
	return 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		}
	if (player->getSkillMod("combat_healing_ability") < StimPackImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			player.sendCommand("healdamage", String.valueOf(super.getObjectID()), player.getTargetID());
	player->sendCommand("healdamage", String::valueOf(StimPackImplementation::getObjectID()), player->getTargetID());
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 0;
	return 0;
}
}

void RangedStimPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.loadTemplateData(templateData);
	StimPackImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		RangedStimPackTemplate 
	if (!templateData->isRangedStimPackTemplate())	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		RangedStimPackTemplate stimPackTemplate = (RangedStimPackTemplate) templateData;
	RangedStimPackTemplate* stimPackTemplate = dynamic_cast<RangedStimPackTemplate*>(templateData);
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.effectiveness = stimPackTemplate.getEffectiveness();
	StimPackImplementation::effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	StimPackImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		area = stimPackTemplate.getArea();
	area = stimPackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = stimPackTemplate.getRange();
	range = stimPackTemplate->getRange();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		rangeMod = stimPackTemplate.getRangeMod();
	rangeMod = stimPackTemplate->getRangeMod();
}

unsigned int RangedStimPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			power *= patient.calculateBFRatio();
	power *= patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float modSkill = (float) healer.getSkillMod("combat_medic_effectiveness");
	float modSkill = (float) healer->getSkillMod("combat_medic_effectiveness");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return (100 + modSkill) / 100 * power;
	return (100 + modSkill) / 100 * power;
}

float RangedStimPackImplementation::getRange(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float modSkill = 0;
	float modSkill = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float 
	if (creature != NULL){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			modSkill = creature.getSkillMod("healing_range");
	modSkill = creature->getSkillMod("healing_range");
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float value = (100 + rangeMod * modSkill) / 100 * range;
	float value = (100 + rangeMod * modSkill) / 100 * range;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return value;
	return value;
}

float RangedStimPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return super.effectiveness;
	return StimPackImplementation::effectiveness;
}

float RangedStimPackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return area;
	return area;
}

bool RangedStimPackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return area != 0;
	return area != 0;
}

float RangedStimPackImplementation::getRangeMod() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return rangeMod;
	return rangeMod;
}

bool RangedStimPackImplementation::isRangedStimPack() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return true;
	return true;
}

/*
 *	RangedStimPackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RangedStimPackAdapter::RangedStimPackAdapter(RangedStimPack* obj) : StimPackAdapter(obj) {
}

void RangedStimPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_:
		{
			CreatureObject* healer = static_cast<CreatureObject*>(inv->getObjectParameter());
			CreatureObject* patient = static_cast<CreatureObject*>(inv->getObjectParameter());
			bool applyBattleFatigue = inv->getBooleanParameter();
			
			unsigned int _m_res = calculatePower(healer, patient, applyBattleFatigue);
			resp->insertInt(_m_res);
		}
		break;
	case RPC_GETRANGE__CREATUREOBJECT_:
		{
			CreatureObject* creature = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			float _m_res = getRange(creature);
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETEFFECTIVENESS__:
		{
			
			float _m_res = getEffectiveness();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETAREA__:
		{
			
			float _m_res = getArea();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISAREA__:
		{
			
			bool _m_res = isArea();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETRANGEMOD__:
		{
			
			float _m_res = getRangeMod();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_ISRANGEDSTIMPACK__:
		{
			
			bool _m_res = isRangedStimPack();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		StimPackAdapter::invokeMethod(methid, inv);
	}
}

int RangedStimPackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<RangedStimPack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

unsigned int RangedStimPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return (static_cast<RangedStimPack*>(stub))->calculatePower(healer, patient, applyBattleFatigue);
}

float RangedStimPackAdapter::getRange(CreatureObject* creature) {
	return (static_cast<RangedStimPack*>(stub))->getRange(creature);
}

float RangedStimPackAdapter::getEffectiveness() {
	return (static_cast<RangedStimPack*>(stub))->getEffectiveness();
}

float RangedStimPackAdapter::getArea() {
	return (static_cast<RangedStimPack*>(stub))->getArea();
}

bool RangedStimPackAdapter::isArea() {
	return (static_cast<RangedStimPack*>(stub))->isArea();
}

float RangedStimPackAdapter::getRangeMod() {
	return (static_cast<RangedStimPack*>(stub))->getRangeMod();
}

bool RangedStimPackAdapter::isRangedStimPack() {
	return (static_cast<RangedStimPack*>(stub))->isRangedStimPack();
}

/*
 *	RangedStimPackHelper
 */

RangedStimPackHelper* RangedStimPackHelper::staticInitializer = RangedStimPackHelper::instance();

RangedStimPackHelper::RangedStimPackHelper() {
	className = "RangedStimPack";

	Core::getObjectBroker()->registerClass(className, this);
}

void RangedStimPackHelper::finalizeHelper() {
	RangedStimPackHelper::finalize();
}

DistributedObject* RangedStimPackHelper::instantiateObject() {
	return new RangedStimPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* RangedStimPackHelper::instantiateServant() {
	return new RangedStimPackImplementation();
}

DistributedObjectPOD* RangedStimPackHelper::instantiatePOD() {
	return new RangedStimPackPOD();
}

DistributedObjectAdapter* RangedStimPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RangedStimPackAdapter(static_cast<RangedStimPack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	RangedStimPackPOD
 */

RangedStimPackPOD::~RangedStimPackPOD() {
	finalize();
}

RangedStimPackPOD::RangedStimPackPOD(void) {
	_className = "RangedStimPack";
}


void RangedStimPackPOD::writeJSON(nlohmann::json& j) {
	StimPackPOD::writeJSON(j);

	nlohmann::json thisObject = nlohmann::json::object();
	if (range)
		thisObject["range"] = range.value();

	if (area)
		thisObject["area"] = area.value();

	if (rangeMod)
		thisObject["rangeMod"] = rangeMod.value();

	j["RangedStimPack"] = thisObject;
}


void RangedStimPackPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RangedStimPackPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RangedStimPackPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = StimPackPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (range) {
	_nameHashCode = 0xddfb8e4d; //RangedStimPack.range
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&range.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (area) {
	_nameHashCode = 0xf6628ec4; //RangedStimPack.area
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (rangeMod) {
	_nameHashCode = 0xc99d9b82; //RangedStimPack.rangeMod
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&rangeMod.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool RangedStimPackPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (StimPackPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xddfb8e4d: //RangedStimPack.range
		{
			float _mnrange;
			TypeInfo<float >::parseFromBinaryStream(&_mnrange, stream);
			range = std::move(_mnrange);
		}
		return true;

	case 0xf6628ec4: //RangedStimPack.area
		{
			float _mnarea;
			TypeInfo<float >::parseFromBinaryStream(&_mnarea, stream);
			area = std::move(_mnarea);
		}
		return true;

	case 0xc99d9b82: //RangedStimPack.rangeMod
		{
			float _mnrangeMod;
			TypeInfo<float >::parseFromBinaryStream(&_mnrangeMod, stream);
			rangeMod = std::move(_mnrangeMod);
		}
		return true;

	}

	return false;
}

void RangedStimPackPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RangedStimPackPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void RangedStimPackPOD::writeObjectCompact(ObjectOutputStream* stream) {
	StimPackPOD::writeObjectCompact(stream);

	TypeInfo<float >::toBinaryStream(&range.value(), stream);

	TypeInfo<float >::toBinaryStream(&area.value(), stream);

	TypeInfo<float >::toBinaryStream(&rangeMod.value(), stream);


}

