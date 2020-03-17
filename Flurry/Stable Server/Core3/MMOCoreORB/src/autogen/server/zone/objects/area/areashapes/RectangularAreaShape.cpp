/*
 *	autogen/server/zone/objects/area/areashapes/RectangularAreaShape.cpp generated by engine3 IDL compiler 0.70
 */

#include "RectangularAreaShape.h"

/*
 *	RectangularAreaShapeStub
 */

enum {RPC_SETDIMENSIONS__FLOAT_FLOAT_FLOAT_FLOAT_ = 4141362759,RPC_GETHEIGHT__,RPC_GETWIDTH__,RPC_CONTAINSPOINT__FLOAT_FLOAT_,RPC_ISRECTANGULARAREASHAPE__,RPC_INTERSECTSWITH__AREASHAPE_,RPC_GETAREA__};

RectangularAreaShape::RectangularAreaShape() : AreaShape(DummyConstructorParameter::instance()) {
	RectangularAreaShapeImplementation* _implementation = new RectangularAreaShapeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RectangularAreaShape");
}

RectangularAreaShape::RectangularAreaShape(DummyConstructorParameter* param) : AreaShape(param) {
	_setClassName("RectangularAreaShape");
}

RectangularAreaShape::~RectangularAreaShape() {
}



void RectangularAreaShape::setDimensions(float x1, float y1, float x2, float y2) {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDIMENSIONS__FLOAT_FLOAT_FLOAT_FLOAT_);
		method.addFloatParameter(x1);
		method.addFloatParameter(y1);
		method.addFloatParameter(x2);
		method.addFloatParameter(y2);

		method.executeWithVoidReturn();
	} else {
		assert(this->isLockedByCurrentThread());
		_implementation->setDimensions(x1, y1, x2, y2);
	}
}

float RectangularAreaShape::getHeight() {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHEIGHT__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getHeight();
	}
}

float RectangularAreaShape::getWidth() {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWIDTH__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getWidth();
	}
}

bool RectangularAreaShape::containsPoint(float x, float y) {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSPOINT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->containsPoint(x, y);
	}
}

bool RectangularAreaShape::containsPoint(const Vector3& point) {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->containsPoint(point);
	}
}

Vector3 RectangularAreaShape::getRandomPosition() {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getRandomPosition();
	}
}

Vector3 RectangularAreaShape::getRandomPosition(const Vector3& origin, float minDistance, float maxDistance) {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getRandomPosition(origin, minDistance, maxDistance);
	}
}

bool RectangularAreaShape::isRectangularAreaShape() {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRECTANGULARAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRectangularAreaShape();
	}
}

bool RectangularAreaShape::intersectsWith(AreaShape* areaShape) {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INTERSECTSWITH__AREASHAPE_);
		method.addObjectParameter(areaShape);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->intersectsWith(areaShape);
	}
}

float RectangularAreaShape::getArea() {
	RectangularAreaShapeImplementation* _implementation = static_cast<RectangularAreaShapeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getArea();
	}
}

DistributedObjectServant* RectangularAreaShape::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RectangularAreaShape::_getImplementationForRead() const {
	return _impl;
}

void RectangularAreaShape::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RectangularAreaShapeImplementation
 */

RectangularAreaShapeImplementation::RectangularAreaShapeImplementation(DummyConstructorParameter* param) : AreaShapeImplementation(param) {
	_initializeImplementation();
}


RectangularAreaShapeImplementation::~RectangularAreaShapeImplementation() {
}


void RectangularAreaShapeImplementation::finalize() {
}

void RectangularAreaShapeImplementation::_initializeImplementation() {
	_setClassHelper(RectangularAreaShapeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RectangularAreaShapeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RectangularAreaShape*>(stub);
	AreaShapeImplementation::_setStub(stub);
}

DistributedObjectStub* RectangularAreaShapeImplementation::_getStub() {
	return _this.get();
}

RectangularAreaShapeImplementation::operator const RectangularAreaShape*() {
	return _this.get();
}

void RectangularAreaShapeImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RectangularAreaShapeImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RectangularAreaShapeImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RectangularAreaShapeImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RectangularAreaShapeImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RectangularAreaShapeImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RectangularAreaShapeImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RectangularAreaShapeImplementation::_serializationHelperMethod() {
	AreaShapeImplementation::_serializationHelperMethod();

	_setClassName("RectangularAreaShape");

}

void RectangularAreaShapeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RectangularAreaShapeImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RectangularAreaShapeImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (AreaShapeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x13a788cd: //RectangularAreaShape.blX
		TypeInfo<float >::parseFromBinaryStream(&blX, stream);
		return true;

	case 0x1766957a: //RectangularAreaShape.blY
		TypeInfo<float >::parseFromBinaryStream(&blY, stream);
		return true;

	case 0x74e960cf: //RectangularAreaShape.urX
		TypeInfo<float >::parseFromBinaryStream(&urX, stream);
		return true;

	case 0x70287d78: //RectangularAreaShape.urY
		TypeInfo<float >::parseFromBinaryStream(&urY, stream);
		return true;

	}

	return false;
}

void RectangularAreaShapeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RectangularAreaShapeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RectangularAreaShapeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = AreaShapeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x13a788cd; //RectangularAreaShape.blX
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blX, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x1766957a; //RectangularAreaShape.blY
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blY, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x74e960cf; //RectangularAreaShape.urX
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&urX, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;

	_nameHashCode = 0x70287d78; //RectangularAreaShape.urY
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&urY, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;


	return _count;
}

RectangularAreaShapeImplementation::RectangularAreaShapeImplementation() : AreaShapeImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		blX = 0;
	blX = 0;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		blY = 0;
	blY = 0;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		urX = 0;
	urX = 0;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		urY = 0;
	urY = 0;
}

void RectangularAreaShapeImplementation::setDimensions(float x1, float y1, float x2, float y2) {
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		blX = x1;
	blX = x1;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		blY = y1;
	blY = y1;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		urX = x2;
	urX = x2;
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		urY = y2;
	urY = y2;
}

float RectangularAreaShapeImplementation::getHeight() {
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		return urY - blY;
	return urY - blY;
}

float RectangularAreaShapeImplementation::getWidth() {
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		return urX - blX;
	return urX - blX;
}

bool RectangularAreaShapeImplementation::isRectangularAreaShape() {
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		return true;
	return true;
}

float RectangularAreaShapeImplementation::getArea() {
	// server/zone/objects/area/areashapes/RectangularAreaShape.idl():  		return getHeight() * getWidth();
	return getHeight() * getWidth();
}

/*
 *	RectangularAreaShapeAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RectangularAreaShapeAdapter::RectangularAreaShapeAdapter(RectangularAreaShape* obj) : AreaShapeAdapter(obj) {
}

void RectangularAreaShapeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETDIMENSIONS__FLOAT_FLOAT_FLOAT_FLOAT_:
		{
			float x1 = inv->getFloatParameter();
			float y1 = inv->getFloatParameter();
			float x2 = inv->getFloatParameter();
			float y2 = inv->getFloatParameter();
			
			setDimensions(x1, y1, x2, y2);
			
		}
		break;
	case RPC_GETHEIGHT__:
		{
			
			float _m_res = getHeight();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_GETWIDTH__:
		{
			
			float _m_res = getWidth();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_CONTAINSPOINT__FLOAT_FLOAT_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			
			bool _m_res = containsPoint(x, y);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISRECTANGULARAREASHAPE__:
		{
			
			bool _m_res = isRectangularAreaShape();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_INTERSECTSWITH__AREASHAPE_:
		{
			AreaShape* areaShape = static_cast<AreaShape*>(inv->getObjectParameter());
			
			bool _m_res = intersectsWith(areaShape);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETAREA__:
		{
			
			float _m_res = getArea();
			resp->insertFloat(_m_res);
		}
		break;
	default:
		AreaShapeAdapter::invokeMethod(methid, inv);
	}
}

void RectangularAreaShapeAdapter::setDimensions(float x1, float y1, float x2, float y2) {
	(static_cast<RectangularAreaShape*>(stub))->setDimensions(x1, y1, x2, y2);
}

float RectangularAreaShapeAdapter::getHeight() {
	return (static_cast<RectangularAreaShape*>(stub))->getHeight();
}

float RectangularAreaShapeAdapter::getWidth() {
	return (static_cast<RectangularAreaShape*>(stub))->getWidth();
}

bool RectangularAreaShapeAdapter::containsPoint(float x, float y) {
	return (static_cast<RectangularAreaShape*>(stub))->containsPoint(x, y);
}

bool RectangularAreaShapeAdapter::isRectangularAreaShape() {
	return (static_cast<RectangularAreaShape*>(stub))->isRectangularAreaShape();
}

bool RectangularAreaShapeAdapter::intersectsWith(AreaShape* areaShape) {
	return (static_cast<RectangularAreaShape*>(stub))->intersectsWith(areaShape);
}

float RectangularAreaShapeAdapter::getArea() {
	return (static_cast<RectangularAreaShape*>(stub))->getArea();
}

/*
 *	RectangularAreaShapeHelper
 */

RectangularAreaShapeHelper* RectangularAreaShapeHelper::staticInitializer = RectangularAreaShapeHelper::instance();

RectangularAreaShapeHelper::RectangularAreaShapeHelper() {
	className = "RectangularAreaShape";

	Core::getObjectBroker()->registerClass(className, this);
}

void RectangularAreaShapeHelper::finalizeHelper() {
	RectangularAreaShapeHelper::finalize();
}

DistributedObject* RectangularAreaShapeHelper::instantiateObject() {
	return new RectangularAreaShape(DummyConstructorParameter::instance());
}

DistributedObjectServant* RectangularAreaShapeHelper::instantiateServant() {
	return new RectangularAreaShapeImplementation();
}

DistributedObjectPOD* RectangularAreaShapeHelper::instantiatePOD() {
	return new RectangularAreaShapePOD();
}

DistributedObjectAdapter* RectangularAreaShapeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RectangularAreaShapeAdapter(static_cast<RectangularAreaShape*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	RectangularAreaShapePOD
 */

RectangularAreaShapePOD::~RectangularAreaShapePOD() {
}

RectangularAreaShapePOD::RectangularAreaShapePOD(void) {
	_className = "RectangularAreaShape";
}


void RectangularAreaShapePOD::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RectangularAreaShapePOD::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RectangularAreaShapePOD::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = AreaShapePOD::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	if (blX) {
	_nameHashCode = 0x13a788cd; //RectangularAreaShape.blX
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blX.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (blY) {
	_nameHashCode = 0x1766957a; //RectangularAreaShape.blY
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blY.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (urX) {
	_nameHashCode = 0x74e960cf; //RectangularAreaShape.urX
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&urX.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}

	if (urY) {
	_nameHashCode = 0x70287d78; //RectangularAreaShape.urY
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&urY.value(), stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);
	_count++;
	}


	return _count;
}

bool RectangularAreaShapePOD::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (AreaShapePOD::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x13a788cd: //RectangularAreaShape.blX
		{
			float _mnblX;
			TypeInfo<float >::parseFromBinaryStream(&_mnblX, stream);
			blX = std::move(_mnblX);
		}
		return true;

	case 0x1766957a: //RectangularAreaShape.blY
		{
			float _mnblY;
			TypeInfo<float >::parseFromBinaryStream(&_mnblY, stream);
			blY = std::move(_mnblY);
		}
		return true;

	case 0x74e960cf: //RectangularAreaShape.urX
		{
			float _mnurX;
			TypeInfo<float >::parseFromBinaryStream(&_mnurX, stream);
			urX = std::move(_mnurX);
		}
		return true;

	case 0x70287d78: //RectangularAreaShape.urY
		{
			float _mnurY;
			TypeInfo<float >::parseFromBinaryStream(&_mnurY, stream);
			urY = std::move(_mnurY);
		}
		return true;

	}

	return false;
}

void RectangularAreaShapePOD::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RectangularAreaShapePOD::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

}

void RectangularAreaShapePOD::writeObjectCompact(ObjectOutputStream* stream) {
	AreaShapePOD::writeObjectCompact(stream);

	TypeInfo<float >::toBinaryStream(&blX.value(), stream);

	TypeInfo<float >::toBinaryStream(&blY.value(), stream);

	TypeInfo<float >::toBinaryStream(&urX.value(), stream);

	TypeInfo<float >::toBinaryStream(&urY.value(), stream);


}

