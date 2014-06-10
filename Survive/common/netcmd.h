#ifndef _NETCMD_H
#define _NETCMD_H


enum{
	//client <-> agent
	CMD_CA_BEGIN = 0,
	CMD_CA_END,

	CMD_AC_BEGIN = CMD_CA_BEGIN + 1,
	CMD_AC_END,

	//client <-> game
	CMD_CS_BEGIN = CMD_AC_END + 1,
	CMD_CS_END,

	CMD_SC_BEGIN = CMD_CS_END + 1,
	CMD_SC_END,

	//client <-> group
	CMD_CG_BEGIN = CMD_SC_END + 1,
	CMD_CG_END,

	CMD_GC_BEGIN = CMD_CG_END + 1,
	CMD_GC_END,

};



/*enum{
	//客户端到服务端
	CMD_CS_BEGPLY = 1,//玩家请求进入地图场景,
	CMD_CS_MOV,       //主角移动

	//服务端到客户端
	CMD_SC_BEGPLY,    //通知玩家进入地图场景成功，可以创建地图和主角
	CMD_SC_ENTERSEE,  //对象进入主角视野
	CMD_SC_LEVSEE,    //对象离开主角视野
	CMD_SC_ENDPLY,    //主角离开场景地图
	CMD_SC_MOV,       //对象移动

};*/





#endif