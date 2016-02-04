//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <Contacts/ContactsExport.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSMutableCopying.h>
#import <Foundation/NSSecureCoding.h>

@class NSString;
@class NSPredicate;
@class NSArray;

CONTACTS_EXPORT NSString* const CNGroupIdentifierKey;
CONTACTS_EXPORT NSString* const CNGroupNameKey;

CONTACTS_EXPORT_CLASS
@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
@property (readonly, copy, nonatomic) NSString* identifier STUB_PROPERTY;
@property (readonly, copy, nonatomic) NSString* name STUB_PROPERTY;
+ (NSPredicate*)predicateForGroupsWithIdentifiers:(NSArray*)identifiers STUB_METHOD;
+ (NSPredicate*)predicateForGroupsInContainerWithIdentifier:(NSString*)containerIdentifier STUB_METHOD;
@end
