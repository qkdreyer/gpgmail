/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "Assistant.h"

@class EmailImporter, NSArray, NSDictionary, NSMatrix, NSMutableArray, NSProgressIndicator, NSTabView, NSTableView, NSTextField, NSView;

@interface ImportAssistant : Assistant
{
    NSMutableArray *_importers;
    NSMutableArray *_startingImporters;
    double _currentTime;
    double _referenceTime;
    int _currentTab;
    NSView *_topView;
    NSTabView *_tabView;
    NSMatrix *_importClients;
    NSTextField *_explanatoryTextInImportClientTab;
    NSProgressIndicator *_progressWheelInImportClientTab;
    NSTextField *_statusLineInImportClientTab;
    NSMatrix *_importTypes;
    NSTextField *_explanatoryTextField;
    NSProgressIndicator *_progressWheel;
    NSTextField *_statusLineField;
    NSTableView *_tableView;
    NSProgressIndicator *_progressBar;
    NSTextField *_textFieldAboveField;
    NSTextField *_textFieldBelowField;
    NSTextField *_importFinishedField;
    id _activityToken;
    NSArray *_clients;
    NSDictionary *_client;
    EmailImporter *_importer;
}

@property(retain, nonatomic) EmailImporter *importer; // @synthesize importer=_importer;
@property(nonatomic) int currentTab; // @synthesize currentTab=_currentTab;
@property(retain, nonatomic) NSDictionary *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) id activityToken; // @synthesize activityToken=_activityToken;
@property(nonatomic) __weak NSTextField *importFinishedField; // @synthesize importFinishedField=_importFinishedField;
@property(nonatomic) __weak NSTextField *textFieldBelowField; // @synthesize textFieldBelowField=_textFieldBelowField;
@property(nonatomic) __weak NSTextField *textFieldAboveField; // @synthesize textFieldAboveField=_textFieldAboveField;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSTextField *statusLineField; // @synthesize statusLineField=_statusLineField;
@property(nonatomic) __weak NSProgressIndicator *progressWheel; // @synthesize progressWheel=_progressWheel;
@property(nonatomic) __weak NSTextField *explanatoryTextField; // @synthesize explanatoryTextField=_explanatoryTextField;
@property(nonatomic) __weak NSMatrix *importTypes; // @synthesize importTypes=_importTypes;
@property(nonatomic) __weak NSTextField *statusLineInImportClientTab; // @synthesize statusLineInImportClientTab=_statusLineInImportClientTab;
@property(nonatomic) __weak NSProgressIndicator *progressWheelInImportClientTab; // @synthesize progressWheelInImportClientTab=_progressWheelInImportClientTab;
@property(nonatomic) __weak NSTextField *explanatoryTextInImportClientTab; // @synthesize explanatoryTextInImportClientTab=_explanatoryTextInImportClientTab;
@property(nonatomic) __weak NSMatrix *importClients; // @synthesize importClients=_importClients;
@property(nonatomic) __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)_endUserInitiatedActivity;
- (void)_beginUserInitiatedActivity;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)shouldUpdateTextFields;
- (void)updateProgressIndicatorByValue:(double)arg1;
- (void)updateProgressIndicatorWithItem:(id)arg1;
- (void)updateProgressIndicatorWithFraction:(double)arg1 ofItem:(id)arg2;
- (void)_setProgressStartOnItem:(id)arg1;
- (void)_updateProgressIndicatorToValue:(id)arg1;
- (void)_updateProgressIndicatorByValue:(id)arg1;
- (void)initializeProgressIndicator;
- (void)reloadTableView;
- (void)setExplanatoryText:(id)arg1;
- (void)setTextFieldBelow:(id)arg1;
- (void)setTextFieldAbove:(id)arg1;
- (void)updateTextField:(id)arg1 withValue:(id)arg2;
- (void)clearStatusLine;
- (void)setStatusLine:(id)arg1;
- (void)askForMailboxLocationAllowedFileTypes:(id)arg1 allowsMultipleSelection:(BOOL)arg2;
- (void)askForMailboxLocation;
- (void)importFinished;
- (void)moveToTab:(int)arg1;
- (void)presentAlertSheetWithString:(id)arg1;
- (void)runImporter;
- (void)createNewImporter;
- (void)importClientSelected:(id)arg1;
- (void)goBackward;
- (void)goForward;
- (void)stop;
- (BOOL)shouldStop;
- (void)start;
- (id)windowTitle;
- (void)dealloc;
- (id)initWithAssistentManager:(id)arg1;

@end

