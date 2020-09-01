import UIKit
import main


class ViewController: UIViewController {
    override func viewDidLoad() {
        super.viewDidLoad()
    
        
        
    
       DKLocation.Companion.init().getAddressForCordinates(cordinates: DKLCordinates.init(latitude: 28.7041, longitude: 77.1025)) { (address:DKLAddress) -> KotlinInt in
        
        
            
            return 1
        }
        
    
        
       // DocTalkBModel.
        
      /*  DcDocCategoryBModel().getList { (array:NSMutableArray) -> KotlinInt in
            
            return 1;
        }
        
        DocTalkBModel().getDetails { (a:DocTalkBModel) -> KotlinUnit in
            self.label.text = a.type as! String;
            return KotlinUnit.init()
        }*/
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    @IBOutlet weak var label: UILabel!
}
