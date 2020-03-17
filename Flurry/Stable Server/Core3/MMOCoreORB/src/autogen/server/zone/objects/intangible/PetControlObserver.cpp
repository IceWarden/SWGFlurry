/*
 *	autogen/server/zone/objects/intangible/PetControlObserver.cpp generated by engine3 IDL compiler 0.70
 */

#include "PetControlObserver.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/intangible/PetControlDevice.h"

/*
 *	PetControlObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 1124304831};

PetControlObserver::PetControlObserver(PetControlDevice* device) : Observer(DummyConstructorParameter::instance()) {
	PetControlObserverImplementation* _implementation = new PetControlObserverImplementation(device);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PetControlObserver");
}

PetControlObserver::PetControlObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("PetControlObserver");
}

PetControlObserver::~PetControlObserver() {
}



int PetControlObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	PetControlObserverImplementation* _implementation = static_cast<PetControlObserverImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
	}
}

DistributedObjectServant* PetControlObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PetControlObserver::_getImplementationForRead() const {
	return _impl;
}

void PetControlObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PetControlObserverImplementation
 */

PetControlObserverImplementation::PetControlObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


PetControlObserverImplementation::~PetControlObserverImplementation() {
}


void PetControlObserverImplementation::finalize() {
}

void PetControlObserverImplementation::_initializeImplementation() {
	_setClassHelper(PetControlObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PetControlObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PetControlObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* PetControlObserverImplementation::_getStub() {
	return _this.get();
}

PetControlObserverImplementation::operator const PetControlObserver*() {
	return _this.get();
}

void PetControlObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PetControlObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PetControlObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PetControlObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PetControlObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PetControlObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PetControlObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PetControlObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("PetControlObserver");

}

void PetControlObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PetControlObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PetControlObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc6f9b6e: //PetControlObserver.petControlDevice
		TypeInfo<ManagedWeakReference<PetControlDevice* > >::parseFromBinaryStream(&petControlDevice, stream);
		return true;

	}

	return false;
}

void PetControlObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PetControlObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PetControlObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xc6f9b6e; //PetControlObserver.petControlDevice
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<PetControlDevice* > >::toBinaryStream(&petControlDevice, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

PetControlObserverImplementation::PetControlObserverImplementation(PetControlDevice* device) {
	_initializeImplementation();
	// server/zone/objects/intangible/PetControlObserver.idl():  		petControlDevice = device;
	petControlDevice = device;
}

int PetControlObserverImplementation::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/intangible/PetControlObserver.idl():  		PetControlDevice 
	if (eventType != ObserverEventType::STARTCOMBAT){
	// server/zone/objects/intangible/PetControlObserver.idl():  			return 0;
	return 0;
}
	// server/zone/objects/intangible/PetControlObserver.idl():  		PetControlDevice strongRef = petControlDevice;
	ManagedReference<PetControlDevice* > strongRef = petControlDevice;
	// server/zone/objects/intangible/PetControlObserver.idl():  		return 
	if (strongRef != NULL){
	// server/zone/objects/intangible/PetControlObserver.idl():  			CreatureObject creature = (CreatureObject) observable;
	ManagedReference<CreatureObject* > creature = dynamic_cast<CreatureObject*>(observable);
	// server/zone/objects/intangible/PetControlObserver.idl():  			strongRef.cancelSpawnObject(creature);
	strongRef->cancelSpawnObject(creature);
}
	// server/zone/objects/intangible/PetControlObserver.idl():  		return 1;
	return 1;
}

/*
 *	PetControlObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PetControlObserverAdapter::PetControlObserverAdapter(PetControlObserver* obj) : ObserverAdapter(obj) {
}

void PetControlObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			unsigned int eventType = inv->getUnsignedIntParameter();
			Observable* observable = static_cast<Observable*>(inv->getObjectParameter());
			ManagedObject* arg1 = static_cast<ManagedObject*>(inv->getObjectParameter());
			long long arg2 = inv->getSignedLongParameter();
			
			int _m_res = notifyObserverEvent(eventType, observable, arg1, arg2);
			resp->insertSignedInt(_m_res);
		}
		break;
	default:
		ObserverAdapter::invokeMethod(methid, inv);
	}
}

int PetControlObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<PetControlObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	PetControlObserverHelper
 */

PetControlObserverHelper* PetControlObserverHelper::staticInitializer = PetControlObserverHelper::instance();

PetControlObserverHelper::PetControlObserverHelper() {
	className = "PetControlObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void PetControlObserverHelper::finalizeHelper() {
	PetControlObserverHelper::finalize();
}

DistributedObject* PetControlObserverHelper::instantiateObject() {
	return new PetControlObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* PetControlObserverHelper::instantiateServant() {
	return new PetControlObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* PetControlObserverHelper::instantiatePOD() {
	return new PetControlObserverPOD();
}

DistributedObjectAdapter* PetControlObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PetControlObserverAdapter(static_cast<PetControlObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PetControlObserverPOD
 */

PetControlObserverPOD::~PetControlObserverPOD() {
}

PetControlObserverPOD::PetControlObserverPOD(void) {
	_className = "PetControlObserver";
}


void PetControlObserverPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PetControlObserverPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PetControlObserverPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverPOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (petControlDevice) {
	_nameHashCode = 0xc6f9b6e; //PetControlObserver.petControlDevice
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<PetControlDevicePOD* > >::toBinaryStream(&petControlDevice.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool PetControlObserverPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ObserverPOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xc6f9b6e: //PetControlObserver.petControlDevice
		{
			ManagedWeakReference<PetControlDevicePOD* > _mnpetControlDevice;
			TypeInfo<ManagedWeakReference<PetControlDevicePOD* > >::parseFromBinaryStream(&_mnpetControlDevice, stream);
			petControlDevice = std::move(_mnpetControlDevice);
		}
		return true;

	}

	return false;
}

void PetControlObserverPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PetControlObserverPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void PetControlObserverPOD::writeObjectCompact(ObjectOutputStream* stream) {
	ObserverPOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<PetControlDevicePOD* > >::toBinaryStream(&petControlDevice.value(), stream);


}

