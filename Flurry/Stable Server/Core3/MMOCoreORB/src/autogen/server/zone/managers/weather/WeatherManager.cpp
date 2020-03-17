/*
 *	autogen/server/zone/managers/weather/WeatherManager.cpp generated by engine3 IDL compiler 0.70
 */

#include "WeatherManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/weather/events/WeatherChangeEvent.h"

/*
 *	WeatherManagerStub
 */

enum {RPC_INITIALIZE__ = 2182280198,RPC_CREATENEWWEATHERPATTERN__,RPC_SENDWEATHERTO__CREATUREOBJECT_,RPC_ENABLEWEATHER__CREATUREOBJECT_,RPC_DISABLEWEATHER__CREATUREOBJECT_,RPC_CHANGEWEATHER__CREATUREOBJECT_INT_,RPC_ISWEATHERENABLED__,RPC_SETWEATHERENABLED__BOOL_,RPC_PRINTINFO__CREATUREOBJECT_};

WeatherManager::WeatherManager(Zone* planet) : ManagedService(DummyConstructorParameter::instance()) {
	WeatherManagerImplementation* _implementation = new WeatherManagerImplementation(planet);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("WeatherManager");
}

WeatherManager::WeatherManager(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("WeatherManager");
}

WeatherManager::~WeatherManager() {
}



void WeatherManager::initialize() {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initialize();
	}
}

void WeatherManager::createNewWeatherPattern() {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATENEWWEATHERPATTERN__);

		method.executeWithVoidReturn();
	} else {
		_implementation->createNewWeatherPattern();
	}
}

void WeatherManager::sendWeatherTo(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDWEATHERTO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendWeatherTo(player);
	}
}

void WeatherManager::enableWeather(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENABLEWEATHER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->enableWeather(player);
	}
}

void WeatherManager::disableWeather(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DISABLEWEATHER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->disableWeather(player);
	}
}

void WeatherManager::changeWeather(CreatureObject* player, int newWeather) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGEWEATHER__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(newWeather);

		method.executeWithVoidReturn();
	} else {
		_implementation->changeWeather(player, newWeather);
	}
}

bool WeatherManager::isWeatherEnabled() {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWEATHERENABLED__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isWeatherEnabled();
	}
}

void WeatherManager::setWeatherEnabled(bool value) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWEATHERENABLED__BOOL_);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else {
		_implementation->setWeatherEnabled(value);
	}
}

void WeatherManager::printInfo(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = static_cast<WeatherManagerImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PRINTINFO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->printInfo(player);
	}
}

DistributedObjectServant* WeatherManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* WeatherManager::_getImplementationForRead() const {
	return _impl;
}

void WeatherManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WeatherManagerImplementation
 */

WeatherManagerImplementation::WeatherManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


WeatherManagerImplementation::~WeatherManagerImplementation() {
}


void WeatherManagerImplementation::finalize() {
}

void WeatherManagerImplementation::_initializeImplementation() {
	_setClassHelper(WeatherManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WeatherManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<WeatherManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* WeatherManagerImplementation::_getStub() {
	return _this.get();
}

WeatherManagerImplementation::operator const WeatherManager*() {
	return _this.get();
}

void WeatherManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void WeatherManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void WeatherManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void WeatherManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void WeatherManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void WeatherManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void WeatherManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void WeatherManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("WeatherManager");

}

void WeatherManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WeatherManagerImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WeatherManagerImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServiceImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void WeatherManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WeatherManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WeatherManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

WeatherManagerImplementation::WeatherManagerImplementation(Zone* planet) {
	_initializeImplementation();
	// server/zone/managers/weather/WeatherManager.idl():  		zone = planet;
	zone = planet;
}

bool WeatherManagerImplementation::isWeatherEnabled() {
	// server/zone/managers/weather/WeatherManager.idl():  		return weatherEnabled;
	return weatherEnabled;
}

void WeatherManagerImplementation::setWeatherEnabled(bool value) {
	// server/zone/managers/weather/WeatherManager.idl():  		weatherEnabled = value;
	weatherEnabled = value;
}

/*
 *	WeatherManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


WeatherManagerAdapter::WeatherManagerAdapter(WeatherManager* obj) : ManagedServiceAdapter(obj) {
}

void WeatherManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			
			initialize();
			
		}
		break;
	case RPC_CREATENEWWEATHERPATTERN__:
		{
			
			createNewWeatherPattern();
			
		}
		break;
	case RPC_SENDWEATHERTO__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			sendWeatherTo(player);
			
		}
		break;
	case RPC_ENABLEWEATHER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			enableWeather(player);
			
		}
		break;
	case RPC_DISABLEWEATHER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			disableWeather(player);
			
		}
		break;
	case RPC_CHANGEWEATHER__CREATUREOBJECT_INT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			int newWeather = inv->getSignedIntParameter();
			
			changeWeather(player, newWeather);
			
		}
		break;
	case RPC_ISWEATHERENABLED__:
		{
			
			bool _m_res = isWeatherEnabled();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETWEATHERENABLED__BOOL_:
		{
			bool value = inv->getBooleanParameter();
			
			setWeatherEnabled(value);
			
		}
		break;
	case RPC_PRINTINFO__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			printInfo(player);
			
		}
		break;
	default:
		ManagedServiceAdapter::invokeMethod(methid, inv);
	}
}

void WeatherManagerAdapter::initialize() {
	(static_cast<WeatherManager*>(stub))->initialize();
}

void WeatherManagerAdapter::createNewWeatherPattern() {
	(static_cast<WeatherManager*>(stub))->createNewWeatherPattern();
}

void WeatherManagerAdapter::sendWeatherTo(CreatureObject* player) {
	(static_cast<WeatherManager*>(stub))->sendWeatherTo(player);
}

void WeatherManagerAdapter::enableWeather(CreatureObject* player) {
	(static_cast<WeatherManager*>(stub))->enableWeather(player);
}

void WeatherManagerAdapter::disableWeather(CreatureObject* player) {
	(static_cast<WeatherManager*>(stub))->disableWeather(player);
}

void WeatherManagerAdapter::changeWeather(CreatureObject* player, int newWeather) {
	(static_cast<WeatherManager*>(stub))->changeWeather(player, newWeather);
}

bool WeatherManagerAdapter::isWeatherEnabled() {
	return (static_cast<WeatherManager*>(stub))->isWeatherEnabled();
}

void WeatherManagerAdapter::setWeatherEnabled(bool value) {
	(static_cast<WeatherManager*>(stub))->setWeatherEnabled(value);
}

void WeatherManagerAdapter::printInfo(CreatureObject* player) {
	(static_cast<WeatherManager*>(stub))->printInfo(player);
}

/*
 *	WeatherManagerHelper
 */

WeatherManagerHelper* WeatherManagerHelper::staticInitializer = WeatherManagerHelper::instance();

WeatherManagerHelper::WeatherManagerHelper() {
	className = "WeatherManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void WeatherManagerHelper::finalizeHelper() {
	WeatherManagerHelper::finalize();
}

DistributedObject* WeatherManagerHelper::instantiateObject() {
	return new WeatherManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* WeatherManagerHelper::instantiateServant() {
	return new WeatherManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* WeatherManagerHelper::instantiatePOD() {
	return new WeatherManagerPOD();
}

DistributedObjectAdapter* WeatherManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WeatherManagerAdapter(static_cast<WeatherManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	WeatherManagerPOD
 */

WeatherManagerPOD::~WeatherManagerPOD() {
}

WeatherManagerPOD::WeatherManagerPOD(void) {
	_className = "WeatherManager";
}


void WeatherManagerPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WeatherManagerPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WeatherManagerPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServicePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count;
}

bool WeatherManagerPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedServicePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void WeatherManagerPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(WeatherManagerPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void WeatherManagerPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ManagedServicePOD::writeObjectCompact(stream);


}

