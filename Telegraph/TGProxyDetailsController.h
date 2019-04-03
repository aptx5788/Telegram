#import "TGCollectionMenuController.h"

@class TGProxyItem;

@interface TGProxyDetailsController : TGCollectionMenuController

@property (nonatomic, copy) void (^detailCompletionBlock)(TGProxyItem *);

- (instancetype)initWithProxy:(TGProxyItem *)proxy;

@end
