/*
 *	autogen/server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.cpp generated by engine3 IDL compiler 0.70
 */

#include "CityTreasuryWithdrawalSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	CityTreasuryWithdrawalSessionStub
 */

enum {RPC_SETREASON__STRING_ = 2015667219,RPC_INITIALIZESESSION__,RPC_SENDTRANSFERBOX__STRING_,RPC_WITHDRAWCREDITS__INT_,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

CityTreasuryWithdrawalSession::CityTreasuryWithdrawalSession(CreatureObject* creature, CityRegion* city, SceneObject* terminal) : Facade(DummyConstructorParameter::instance()) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = new CityTreasuryWithdrawalSessionImplementation(creature, city, terminal);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CityTreasuryWithdrawalSession");
}

CityTreasuryWithdrawalSession::CityTreasuryWithdrawalSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("CityTreasuryWithdrawalSession");
}

CityTreasuryWithdrawalSession::~CityTreasuryWithdrawalSession() {
}



void CityTreasuryWithdrawalSession::setReason(const String& r) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETREASON__STRING_);
		method.addAsciiParameter(r);

		method.executeWithVoidReturn();
	} else {
		_implementation->setReason(r);
	}
}

int CityTreasuryWithdrawalSession::initializeSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int CityTreasuryWithdrawalSession::sendTransferBox(const String& reason) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTRANSFERBOX__STRING_);
		method.addAsciiParameter(reason);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->sendTransferBox(reason);
	}
}

int CityTreasuryWithdrawalSession::withdrawCredits(int value) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_WITHDRAWCREDITS__INT_);
		method.addSignedIntParameter(value);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->withdrawCredits(value);
	}
}

int CityTreasuryWithdrawalSession::cancelSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int CityTreasuryWithdrawalSession::clearSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

DistributedObjectServant* CityTreasuryWithdrawalSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CityTreasuryWithdrawalSession::_getImplementationForRead() const {
	return _impl;
}

void CityTreasuryWithdrawalSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CityTreasuryWithdrawalSessionImplementation
 */

CityTreasuryWithdrawalSessionImplementation::CityTreasuryWithdrawalSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CityTreasuryWithdrawalSessionImplementation::~CityTreasuryWithdrawalSessionImplementation() {
}


void CityTreasuryWithdrawalSessionImplementation::finalize() {
}

void CityTreasuryWithdrawalSessionImplementation::_initializeImplementation() {
	_setClassHelper(CityTreasuryWithdrawalSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CityTreasuryWithdrawalSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CityTreasuryWithdrawalSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CityTreasuryWithdrawalSessionImplementation::_getStub() {
	return _this.get();
}

CityTreasuryWithdrawalSessionImplementation::operator const CityTreasuryWithdrawalSession*() {
	return _this.get();
}

void CityTreasuryWithdrawalSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CityTreasuryWithdrawalSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CityTreasuryWithdrawalSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CityTreasuryWithdrawalSession");

}

void CityTreasuryWithdrawalSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CityTreasuryWithdrawalSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CityTreasuryWithdrawalSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa1ffbdcc: //CityTreasuryWithdrawalSession.creatureObject
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;

	case 0xd62e2783: //CityTreasuryWithdrawalSession.cityRegion
		TypeInfo<ManagedWeakReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;

	case 0x20896a97: //CityTreasuryWithdrawalSession.terminalObject
		TypeInfo<ManagedWeakReference<SceneObject* > >::parseFromBinaryStream(&terminalObject, stream);
		return true;

	case 0xbb349f6f: //CityTreasuryWithdrawalSession.reason
		TypeInfo<String >::parseFromBinaryStream(&reason, stream);
		return true;

	}

	return false;
}

void CityTreasuryWithdrawalSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityTreasuryWithdrawalSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityTreasuryWithdrawalSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xa1ffbdcc; //CityTreasuryWithdrawalSession.creatureObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xd62e2783; //CityTreasuryWithdrawalSession.cityRegion
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x20896a97; //CityTreasuryWithdrawalSession.terminalObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObject* > >::toBinaryStream(&terminalObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0xbb349f6f; //CityTreasuryWithdrawalSession.reason
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&reason, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

CityTreasuryWithdrawalSessionImplementation::CityTreasuryWithdrawalSessionImplementation(CreatureObject* creature, CityRegion* city, SceneObject* terminal) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		Logger.setLoggingName("CityTreasuryWithdrawalSession");
	Logger::setLoggingName("CityTreasuryWithdrawalSession");
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		cityRegion = city;
	cityRegion = city;
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		terminalObject = terminal;
	terminalObject = terminal;
}

void CityTreasuryWithdrawalSessionImplementation::setReason(const String& r) {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		reason = r;
	reason = r;
}

int CityTreasuryWithdrawalSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		CreatureObject creature = creatureObject;
	ManagedReference<CreatureObject* > creature = creatureObject;
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		return 
	if (creature != NULL)	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  			creature.dropActiveSession(SessionFacadeType.CITYWITHDRAW);
	creature->dropActiveSession(SessionFacadeType::CITYWITHDRAW);
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		return 0;
	return 0;
}

int CityTreasuryWithdrawalSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		return 0;
	return 0;
}

/*
 *	CityTreasuryWithdrawalSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CityTreasuryWithdrawalSessionAdapter::CityTreasuryWithdrawalSessionAdapter(CityTreasuryWithdrawalSession* obj) : FacadeAdapter(obj) {
}

void CityTreasuryWithdrawalSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETREASON__STRING_:
		{
			 String r; inv->getAsciiParameter(r);
			
			setReason(r);
			
		}
		break;
	case RPC_INITIALIZESESSION__:
		{
			
			int _m_res = initializeSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SENDTRANSFERBOX__STRING_:
		{
			 String reason; inv->getAsciiParameter(reason);
			
			int _m_res = sendTransferBox(reason);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_WITHDRAWCREDITS__INT_:
		{
			int value = inv->getSignedIntParameter();
			
			int _m_res = withdrawCredits(value);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

void CityTreasuryWithdrawalSessionAdapter::setReason(const String& r) {
	(static_cast<CityTreasuryWithdrawalSession*>(stub))->setReason(r);
}

int CityTreasuryWithdrawalSessionAdapter::initializeSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->initializeSession();
}

int CityTreasuryWithdrawalSessionAdapter::sendTransferBox(const String& reason) {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->sendTransferBox(reason);
}

int CityTreasuryWithdrawalSessionAdapter::withdrawCredits(int value) {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->withdrawCredits(value);
}

int CityTreasuryWithdrawalSessionAdapter::cancelSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->cancelSession();
}

int CityTreasuryWithdrawalSessionAdapter::clearSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->clearSession();
}

/*
 *	CityTreasuryWithdrawalSessionHelper
 */

CityTreasuryWithdrawalSessionHelper* CityTreasuryWithdrawalSessionHelper::staticInitializer = CityTreasuryWithdrawalSessionHelper::instance();

CityTreasuryWithdrawalSessionHelper::CityTreasuryWithdrawalSessionHelper() {
	className = "CityTreasuryWithdrawalSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CityTreasuryWithdrawalSessionHelper::finalizeHelper() {
	CityTreasuryWithdrawalSessionHelper::finalize();
}

DistributedObject* CityTreasuryWithdrawalSessionHelper::instantiateObject() {
	return new CityTreasuryWithdrawalSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityTreasuryWithdrawalSessionHelper::instantiateServant() {
	return new CityTreasuryWithdrawalSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectPOD* CityTreasuryWithdrawalSessionHelper::instantiatePOD() {
	return new CityTreasuryWithdrawalSessionPOD();
}

DistributedObjectAdapter* CityTreasuryWithdrawalSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityTreasuryWithdrawalSessionAdapter(static_cast<CityTreasuryWithdrawalSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CityTreasuryWithdrawalSessionPOD
 */

CityTreasuryWithdrawalSessionPOD::~CityTreasuryWithdrawalSessionPOD() {
}

CityTreasuryWithdrawalSessionPOD::CityTreasuryWithdrawalSessionPOD(void) {
	_className = "CityTreasuryWithdrawalSession";
}


void CityTreasuryWithdrawalSessionPOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityTreasuryWithdrawalSessionPOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityTreasuryWithdrawalSessionPOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (creatureObject) {
	_nameHashCode = 0xa1ffbdcc; //CityTreasuryWithdrawalSession.creatureObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&creatureObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (cityRegion) {
	_nameHashCode = 0xd62e2783; //CityTreasuryWithdrawalSession.cityRegion
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CityRegionPOD* > >::toBinaryStream(&cityRegion.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (terminalObject) {
	_nameHashCode = 0x20896a97; //CityTreasuryWithdrawalSession.terminalObject
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::toBinaryStream(&terminalObject.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (reason) {
	_nameHashCode = 0xbb349f6f; //CityTreasuryWithdrawalSession.reason
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&reason.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool CityTreasuryWithdrawalSessionPOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xa1ffbdcc: //CityTreasuryWithdrawalSession.creatureObject
		{
			ManagedWeakReference<CreatureObjectPOD* > _mncreatureObject;
			TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::parseFromBinaryStream(&_mncreatureObject, stream);
			creatureObject = std::move(_mncreatureObject);
		}
		return true;

	case 0xd62e2783: //CityTreasuryWithdrawalSession.cityRegion
		{
			ManagedWeakReference<CityRegionPOD* > _mncityRegion;
			TypeInfo<ManagedWeakReference<CityRegionPOD* > >::parseFromBinaryStream(&_mncityRegion, stream);
			cityRegion = std::move(_mncityRegion);
		}
		return true;

	case 0x20896a97: //CityTreasuryWithdrawalSession.terminalObject
		{
			ManagedWeakReference<SceneObjectPOD* > _mnterminalObject;
			TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::parseFromBinaryStream(&_mnterminalObject, stream);
			terminalObject = std::move(_mnterminalObject);
		}
		return true;

	case 0xbb349f6f: //CityTreasuryWithdrawalSession.reason
		{
			String _mnreason;
			TypeInfo<String >::parseFromBinaryStream(&_mnreason, stream);
			reason = std::move(_mnreason);
		}
		return true;

	}

	return false;
}

void CityTreasuryWithdrawalSessionPOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CityTreasuryWithdrawalSessionPOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void CityTreasuryWithdrawalSessionPOD::writeObjectCompact(ObjectOutputStream* stream) {
	FacadePOD::writeObjectCompact(stream);

	TypeInfo<ManagedWeakReference<CreatureObjectPOD* > >::toBinaryStream(&creatureObject.value(), stream);

	TypeInfo<ManagedWeakReference<CityRegionPOD* > >::toBinaryStream(&cityRegion.value(), stream);

	TypeInfo<ManagedWeakReference<SceneObjectPOD* > >::toBinaryStream(&terminalObject.value(), stream);

	TypeInfo<String >::toBinaryStream(&reason.value(), stream);


}

