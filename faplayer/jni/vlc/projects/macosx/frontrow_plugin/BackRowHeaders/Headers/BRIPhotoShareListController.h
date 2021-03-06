/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRIPhotoShareListener, NSArray;

@interface BRIPhotoShareListController : BRMediaMenuController <BRMenuListItemProvider>
{
    BRIPhotoShareListener *_listener;
    NSArray *_servers;
}

- (id)init;
- (id)initWithServers:(id)fp8;
- (void)dealloc;
- (BOOL)isNetworkDependent;
- (void)controlWasActivated;
- (void)controlWillDeactivate;
- (long)itemCount;
- (float)heightForRow:(long)fp8;
- (BOOL)rowSelectable:(long)fp8;
- (id)titleForRow:(long)fp8;
- (id)itemForRow:(long)fp8;
- (void)itemSelected:(long)fp8;

@end

