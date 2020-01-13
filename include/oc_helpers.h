#import <Foundation/Foundation.h>
#ifdef __cplusplus
extern "C" {
#endif
#import "lua.h"
#import "lauxlib.h"
#ifdef __cplusplus
}
#endif

lua_State *getCurrentThreadLuaState();

void setLuaError(void (*func)(const char *));

void startLuakit(int argc, char * argv[]);

void oc_fromObjc(lua_State *L, id object);

id oc_copyToObjc(lua_State *L, int stackIndex);

void post_notification(int type, id data);

id call_lua_function(NSString * moduleName , NSString * MethodName);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4, id params5);


id call_lua_function(NSString * moduleName , NSString * MethodName, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4, id params5, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4, id params5, id params6, lua_State * L);

id call_lua_function(NSString * moduleName , NSString * MethodName , id params1, id params2, id params3, id params4, id params5, id params6, id params7, lua_State * L);
