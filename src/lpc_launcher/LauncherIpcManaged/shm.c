
#include"shm.h"


scoped_shm_writer *new_writer()
{
	const char* ipc_shm = ipc_uuid_shm();

	char shm_result[128];

	strncpy(shm_result, ipc_shm, sizeof(shm_result) - 1);
	shm_result[sizeof(shm_result) - 1] = '\0';

	//scoped_shm_writer* writer = create_scoped_shm_writer(ipc_shm);
	scoped_shm_writer* writer = create_scoped_shm_writer(shm_result);

	return writer;
}

/*
scoped_shm_writer *new_writer()
{
	const char* ipc_shm = ipc_uuid_shm();
	char* non_const_ipc_shm = _strdup(ipc_shm);
	scoped_shm_writer* writer = create_scoped_shm_writer(non_const_ipc_shm);

	free(non_const_ipc_shm);
		
	return writer;
}

*/
