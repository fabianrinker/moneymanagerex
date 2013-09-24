// -*- C++ -*-
//=============================================================================
/**
 *      Copyright (c) 2013 Guan Lisheng (guanlisheng@gmail.com)
 *
 *      @file
 *
 *      @author [sqlite2cpp.py]
 *
 *      @brief
 *
 *      Revision History:
 *          AUTO GENERATED at 2013-07-03 22:55:49.491495.
 *          DO NOT EDIT!
 */
//=============================================================================

#ifndef MODEL_SUBCATEGORY_H
#define MODEL_SUBCATEGORY_H

#include "Model.h"
#include "db/DB_Table_Subcategory_V1.h"
#include "Model_Category.h"

class Model_Subcategory : public Model, public DB_Table_SUBCATEGORY_V1
{
    using DB_Table_SUBCATEGORY_V1::all;
    using DB_Table_SUBCATEGORY_V1::find;
    using DB_Table_SUBCATEGORY_V1::get;
public:
    Model_Subcategory(): Model(), DB_Table_SUBCATEGORY_V1() 
    {
    };
    ~Model_Subcategory() {};

public:
    wxArrayString types_;

public:
    static Model_Subcategory& instance()
    {
        return Singleton<Model_Subcategory>::instance();
    }
    static Model_Subcategory& instance(wxSQLite3Database* db)
    {
        Model_Subcategory& ins = Singleton<Model_Subcategory>::instance();
        ins.db_ = db;
        return ins;
    }
public:
    Data_Set all(COLUMN col = COLUMN(0), bool asc = true)
    {
        this->ensure(this->db_);
        return all(db_, col, asc);
    }
    template<class V>
    Data_Set find(COLUMN col, const V& v)
    {
        return find(db_, col, v);
    }
    Data* get(int id)
    {
        return this->get(id, this->db_);
    }
    int save(Data* asset)
    {
        asset->save(this->db_);
        return asset->id();
    }
public:
    static bool is_used(int id)
    {
        // TODO
        return true;
    }
};

#endif // 
