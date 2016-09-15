# Advance-Tableview

Table view Advance 


![alt tag](https://github.com/iOS-Fundas/Advance-Tableview/blob/master/Simulator%20Screen%20Shot%20Sep%2015%2C%202016%2C%2010.50.32%20AM.png)



Following method is use With table view 
// Table View Datasource method for number of  section in table view 
-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView

// Table View Datasource method for number of row in section
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section

// Table View Datasource method for genrated table view cell
-(UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath

// Table View Delegate Method Invoke when table view Cell Select
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath

// Table View Delegate Method Invoke when table view Cell Deselect
-(void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath
// Table View Datasource Method for header view
-(UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section

// Table View Datasource Method for Footer view
-(UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section

// Table View Delegate Method Invoke when table view swap in editing mode
-(void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath{

// Table View  method fot display header View
-(void)tableView:(UITableView *)tableView willDisplayHeaderView:(UIView *)view forSection:(NSInteger)section
// Table View  method fot display Footer View
-(void)tableView:(UITableView *)tableView willDisplayFooterView:(UIView *)view forSection:(NSInteger)section

// Move Table view Cell
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath
