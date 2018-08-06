// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#import "RVJavascriptType.h"
#import <Foundation/Foundation.h>
@class RVJavascriptObject;
@protocol RVJavascriptArray;
@protocol RVJavascriptMap;
@protocol RVJavascriptMapKeyIterator;


@protocol RVJavascriptMap

- (BOOL)hasKey:(nonnull NSString *)name;

- (BOOL)isNull:(nonnull NSString *)name;

- (BOOL)getBoolean:(nonnull NSString *)name;

- (double)getDouble:(nonnull NSString *)name;

- (int32_t)getInt:(nonnull NSString *)name;

- (nonnull NSString *)getString:(nonnull NSString *)name;

- (nullable id<RVJavascriptArray>)getArray:(nonnull NSString *)name;

- (nullable id<RVJavascriptMap>)getMap:(nonnull NSString *)name;

- (nullable RVJavascriptObject *)getObject:(nonnull NSString *)name;

- (RVJavascriptType)getType:(nonnull NSString *)name;

- (nullable id<RVJavascriptMapKeyIterator>)keySetIterator;

- (void)putNull:(nonnull NSString *)key;

- (void)putBoolean:(nonnull NSString *)key
             value:(BOOL)value;

- (void)putDouble:(nonnull NSString *)key
            value:(double)value;

- (void)putInt:(nonnull NSString *)key
         value:(int32_t)value;

- (void)putString:(nonnull NSString *)key
            value:(nonnull NSString *)value;

- (void)putArray:(nonnull NSString *)key
           value:(nullable id<RVJavascriptArray>)value;

- (void)putMap:(nonnull NSString *)key
         value:(nullable id<RVJavascriptMap>)value;

- (void)putObject:(nonnull NSString *)key
            value:(nullable RVJavascriptObject *)value;

- (void)merge:(nullable id<RVJavascriptMap>)source;

@end