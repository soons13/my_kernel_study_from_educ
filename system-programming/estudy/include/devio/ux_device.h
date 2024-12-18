//------------------------------------------------------------------------------
// 파 일 명 : ux_device.h
// 프로젝트 : fwp
// 설    명 :
// 작 성 자 : 유영창, 이영민, 문경원 ,이원재
// 작 성 일 : 2009년 1월 17일
// 수 정 일 :
// 수 정 일 :
// 주    의 :
// 라이센스 : GPL V2
//------------------------------------------------------------------------------

#ifndef _UX_HEADER_
#define _UX_HEADER_


#ifdef __cplusplus
extern "C"
{
#endif

	int 		ux_mknod_device_open		( char *path, char major, char minor , int open_flag);		//	검색된 장치를 mknod 한후 ,파일을 Open한다.

#ifdef __cplusplus
}
#endif

//------------------------------------------------------------------------------
//
// 전역 변수 정의
//
//------------------------------------------------------------------------------

#endif  // _UX_HEADER_
