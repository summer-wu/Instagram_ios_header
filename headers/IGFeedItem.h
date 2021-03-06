//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPost.h"

#import "IGStoredObject.h"

@class IGCommentModel, IGDirectResponseInfo, IGPivotMediaInfo, IGPostItem, IGSponsoredPostInfo, IGUsertagGroup, NSArray, NSNumber, NSString;

@interface IGFeedItem : IGPost <IGStoredObject>
{
    IGUsertagGroup *_usertags;
    BOOL _inPhotosOfYou;
    BOOL _isHidden;
    BOOL _isWaitingForPivot;
    BOOL _showPivot;
    BOOL _hasBeenPromoted;
    BOOL _carouselLinkButtonOverride;
    BOOL _expanded;
    NSString *_permalink;
    NSString *_exploreAlgorithm;
    NSString *_exploreImpressionToken;
    NSString *_mediaId;
    int _directResponseStyle;
    int _directResponseHeaderStyle;
    NSNumber *_iTunesItemIdentifier;
    IGSponsoredPostInfo *_sponsoredPostInfo;
    NSString *_organicTrackingToken;
    IGPivotMediaInfo *_pivotInfo;
    NSArray *_albumItems;
}

+ (id)centralizedStore;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property(retain) NSArray *albumItems; // @synthesize albumItems=_albumItems;
@property(retain) IGPivotMediaInfo *pivotInfo; // @synthesize pivotInfo=_pivotInfo;
@property BOOL carouselLinkButtonOverride; // @synthesize carouselLinkButtonOverride=_carouselLinkButtonOverride;
@property(readonly) BOOL hasBeenPromoted; // @synthesize hasBeenPromoted=_hasBeenPromoted;
@property(copy) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly) IGSponsoredPostInfo *sponsoredPostInfo; // @synthesize sponsoredPostInfo=_sponsoredPostInfo;
@property(readonly) NSNumber *iTunesItemIdentifier; // @synthesize iTunesItemIdentifier=_iTunesItemIdentifier;
@property(readonly) int directResponseHeaderStyle; // @synthesize directResponseHeaderStyle=_directResponseHeaderStyle;
@property(readonly) int directResponseStyle; // @synthesize directResponseStyle=_directResponseStyle;
@property(readonly) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property BOOL showPivot; // @synthesize showPivot=_showPivot;
@property BOOL isWaitingForPivot; // @synthesize isWaitingForPivot=_isWaitingForPivot;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly) NSString *exploreImpressionToken; // @synthesize exploreImpressionToken=_exploreImpressionToken;
@property(readonly) NSString *exploreAlgorithm; // @synthesize exploreAlgorithm=_exploreAlgorithm;
@property(readonly) BOOL inPhotosOfYou; // @synthesize inPhotosOfYou=_inPhotosOfYou;
@property(readonly, copy) NSString *permalink; // @synthesize permalink=_permalink;
- (void).cxx_destruct;
- (void)fetchAndShowPivotIfNeededForRequestEntry:(int)arg1;
- (void)fetchPivotsWithRequestEntry:(int)arg1;
- (BOOL)hasPivot;
- (id)urlToFlagComment:(id)arg1;
- (id)urlToDeleteComment:(id)arg1;
- (id)urlToPostComment;
- (void)performLike:(BOOL)arg1 withUser:(id)arg2 userDidDoubleTap:(BOOL)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 analyticsModule:(id)arg7 requestSourceParams:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)performLike:(BOOL)arg1 withUser:(id)arg2 userDidDoubleTap:(BOOL)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)deleteItem;
- (void)setSponsoredPostInfoFromEntry:(id)arg1;
- (void)markAsExpanded;
- (BOOL)isExpanded;
- (void)setMediaIdWithPk:(id)arg1;
- (id)mediaIdFromPK:(id)arg1;
@property(readonly) BOOL isAdsCarousel;
@property(readonly) BOOL isDirectResponse;
- (BOOL)isSponsoredApp;
@property(readonly) IGCommentModel *headline;
@property(readonly) IGDirectResponseInfo *directResponseInfo;
- (void)setInPhotosOfYou:(BOOL)arg1;
- (void)setUsertagsFromEntry:(id)arg1;
- (id)usertags;
- (BOOL)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)firstUnseenItemNewerThan:(id)arg1;
@property(readonly, nonatomic) IGPostItem *lastItem;
@property(readonly, nonatomic) IGPostItem *firstItem;
- (id)bylineStyleString;
- (id)boomerangStyleStringC;
- (id)grayStyleString;
- (id)defaultStyleString;
- (id)featuredBadgeText;
- (id)viewCountTextWithUrl;
- (id)viewCountText;
- (id)simplifiedLikeText;
- (id)likeText;
- (id)buildShortFormatTimestamp;
- (id)buildLikeCellStyledStringForNoneLikeString:(id)arg1;
- (id)buildLikeCellStyledStringWithIcon:(id)arg1 andText:(id)arg2;
- (id)buildTimestampContextStringWithExplore:(BOOL)arg1;
- (id)buildViewCountStyledString;
- (id)buildFeaturedBadgeStyledString;
- (id)buildMoreCommentsStyledString;
- (id)buildLayoutContextString;
- (id)buildHyperlapseContextString;
- (id)buildBoomerangContextString;
- (id)buildExploreContextString;
- (id)buildLikersStyledString;
@property(readonly, copy, nonatomic) NSString *ig_productSessionKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

