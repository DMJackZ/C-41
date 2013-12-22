//
//  ASHMasterViewModel.h
//  C-41
//
//  Created by Ash Furrow on 12/21/2013.
//  Copyright (c) 2013 Ash Furrow. All rights reserved.
//

#import "RVMViewModel.h"

@interface ASHMasterViewModel : RVMViewModel

@property (nonatomic, readonly) RACSignal *updatedContentSignal;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

-(NSInteger)numberOfSections;
-(NSInteger)numberOfItemsInSection:(NSInteger)section;

-(void)deleteObjectAtIndexPath:(NSIndexPath *)indexPath;

@end
