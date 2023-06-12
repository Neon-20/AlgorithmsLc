/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    while(obj!=null){
        if(obj.constructor == classFunction){
            return true;
        }
        obj = Object.getPrototypeOf(obj)
    }
    return false;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */