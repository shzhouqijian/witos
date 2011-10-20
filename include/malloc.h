#pragma once

#include <types.h>

void *malloc(size_t size);

void free(void *p);

void *zalloc(size_t);

void *dma_malloc(size_t size, __u32 *pa);

#define SAFE_FREE(p) \
	do \
	{  \
		free(p); \
		p = NULL; \
	} while (0)

