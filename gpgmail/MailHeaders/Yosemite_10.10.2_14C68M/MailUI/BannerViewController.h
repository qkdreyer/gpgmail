/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

@class BannerBackgroundView, BannerContainerViewController, MUIWebDocument, MessageWebDocumentView, NSColor;

@interface BannerViewController : NSViewController
{
    BOOL _loaded;
    BOOL _wantsDisplay;
    BOOL _viewIsLoaded;
    BannerContainerViewController *_container;
}

+ (id)keyPathsForValuesAffectingWebDocument;
+ (id)keyPathsForValuesAffectingWebDocumentView;
@property(nonatomic) BOOL viewIsLoaded; // @synthesize viewIsLoaded=_viewIsLoaded;
@property(nonatomic) BannerContainerViewController *container; // @synthesize container=_container;
- (void)updateWantsDisplay;
- (void)updateBannerContents;
@property(nonatomic) BOOL wantsDisplay;
@property(nonatomic) BOOL loaded;
@property(readonly, nonatomic) MUIWebDocument *webDocument;
@property(readonly, nonatomic) __weak MessageWebDocumentView *webDocumentView;
@property(readonly, nonatomic) NSColor *backgroundColor;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
@property(retain) BannerBackgroundView *view;
@property(readonly, nonatomic) double bannerHeight;
- (id)nibBundle;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBannerContainerViewController:(id)arg1;

@end

