#ifndef __TINYCONFIG_H__
#define __TINYCONFIG_H__
#ifdef __cplusplus
extern "C" {
#endif

typedef struct tinyconfig_item
{
    void*       addr;   /**< The address of configuration.*/
    unsigned    size;   /**< The size of configuration.*/
} tinyconfig_item_t;

/**
 * @brief Initialize tinyconfig.
 * @param[in] items - Configuration items.
 * @param[in] count - Item count.
 * @return 0 on success.
 * @return -errno on error.
 */
int tinyconfig_init(const tinyconfig_item_t* items, unsigned count);

/**
 * @brief Exit tinyconfig.
 * @return 0 on success.
 * @return -errno on error.
 */
int tinyconfig_exit(void);

#ifdef __cplusplus
}
#endif
#endif
