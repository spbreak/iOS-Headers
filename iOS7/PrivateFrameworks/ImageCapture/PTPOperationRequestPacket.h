/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PTPOperationRequestPacket : NSObject
{
    int _numParameters;
    unsigned int _dataPhaseInfo;
    unsigned short _operationCode;
    unsigned int _transactionID;
    unsigned int _parameters[5];
}

- (void)setParameter5:(unsigned int)arg1;
- (unsigned int)parameter5;
- (void)setParameter4:(unsigned int)arg1;
- (unsigned int)parameter4;
- (void)setParameter3:(unsigned int)arg1;
- (unsigned int)parameter3;
- (void)setParameter2:(unsigned int)arg1;
- (unsigned int)parameter2;
- (void)setParameter1:(unsigned int)arg1;
- (unsigned int)parameter1;
- (void)setPparameter:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)parameterAtIndex:(unsigned int)arg1;
- (int)numParameters;
- (void)setDataPhaseInfo:(unsigned int)arg1;
- (unsigned int)dataPhaseInfo;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;
- (void)setOperationCode:(unsigned short)arg1;
- (unsigned short)operationCode;
- (id)description;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned int)arg2;
- (id)contentForUSB;
- (id)contentForTCP;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6 parameter4:(unsigned int)arg7 parameter5:(unsigned int)arg8;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6 parameter4:(unsigned int)arg7;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 numParameters:(unsigned int)arg4 parameters:(unsigned int *)arg5;

@end

