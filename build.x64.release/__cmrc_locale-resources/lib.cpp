        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace cmakerc {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.cs.json
extern const char* const f_58a2_locales_messages_cs_json_begin;
extern const char* const f_58a2_locales_messages_cs_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.de.json
extern const char* const f_9edb_locales_messages_de_json_begin;
extern const char* const f_9edb_locales_messages_de_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.es.json
extern const char* const f_7f58_locales_messages_es_json_begin;
extern const char* const f_7f58_locales_messages_es_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.fr.json
extern const char* const f_b036_locales_messages_fr_json_begin;
extern const char* const f_b036_locales_messages_fr_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.it.json
extern const char* const f_fc27_locales_messages_it_json_begin;
extern const char* const f_fc27_locales_messages_it_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.ja.json
extern const char* const f_727a_locales_messages_ja_json_begin;
extern const char* const f_727a_locales_messages_ja_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.json
extern const char* const f_cf00_locales_messages_json_begin;
extern const char* const f_cf00_locales_messages_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.ko.json
extern const char* const f_7b18_locales_messages_ko_json_begin;
extern const char* const f_7b18_locales_messages_ko_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.pl.json
extern const char* const f_2e93_locales_messages_pl_json_begin;
extern const char* const f_2e93_locales_messages_pl_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.pt-BR.json
extern const char* const f_daa7_locales_messages_pt_BR_json_begin;
extern const char* const f_daa7_locales_messages_pt_BR_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.ru.json
extern const char* const f_5357_locales_messages_ru_json_begin;
extern const char* const f_5357_locales_messages_ru_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.tr.json
extern const char* const f_35bd_locales_messages_tr_json_begin;
extern const char* const f_35bd_locales_messages_tr_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.zh-Hans.json
extern const char* const f_56de_locales_messages_zh_Hans_json_begin;
extern const char* const f_56de_locales_messages_zh_Hans_json_end;
// Pointers to /workspaces/GHA_Binary_Caching/vcpkg-tool/locales/messages.zh-Hant.json
extern const char* const f_8dcd_locales_messages_zh_Hant_json_begin;
extern const char* const f_8dcd_locales_messages_zh_Hant_json_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    static auto f_5e74_locales_dir = root_directory_dir.directory.add_subdir("locales");
    root_index.emplace("locales", &f_5e74_locales_dir.index_entry);
    root_index.emplace(
        "locales/messages.cs.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.cs.json",
            res_chars::f_58a2_locales_messages_cs_json_begin,
            res_chars::f_58a2_locales_messages_cs_json_end
        )
    );
    root_index.emplace(
        "locales/messages.de.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.de.json",
            res_chars::f_9edb_locales_messages_de_json_begin,
            res_chars::f_9edb_locales_messages_de_json_end
        )
    );
    root_index.emplace(
        "locales/messages.es.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.es.json",
            res_chars::f_7f58_locales_messages_es_json_begin,
            res_chars::f_7f58_locales_messages_es_json_end
        )
    );
    root_index.emplace(
        "locales/messages.fr.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.fr.json",
            res_chars::f_b036_locales_messages_fr_json_begin,
            res_chars::f_b036_locales_messages_fr_json_end
        )
    );
    root_index.emplace(
        "locales/messages.it.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.it.json",
            res_chars::f_fc27_locales_messages_it_json_begin,
            res_chars::f_fc27_locales_messages_it_json_end
        )
    );
    root_index.emplace(
        "locales/messages.ja.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.ja.json",
            res_chars::f_727a_locales_messages_ja_json_begin,
            res_chars::f_727a_locales_messages_ja_json_end
        )
    );
    root_index.emplace(
        "locales/messages.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.json",
            res_chars::f_cf00_locales_messages_json_begin,
            res_chars::f_cf00_locales_messages_json_end
        )
    );
    root_index.emplace(
        "locales/messages.ko.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.ko.json",
            res_chars::f_7b18_locales_messages_ko_json_begin,
            res_chars::f_7b18_locales_messages_ko_json_end
        )
    );
    root_index.emplace(
        "locales/messages.pl.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.pl.json",
            res_chars::f_2e93_locales_messages_pl_json_begin,
            res_chars::f_2e93_locales_messages_pl_json_end
        )
    );
    root_index.emplace(
        "locales/messages.pt-BR.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.pt-BR.json",
            res_chars::f_daa7_locales_messages_pt_BR_json_begin,
            res_chars::f_daa7_locales_messages_pt_BR_json_end
        )
    );
    root_index.emplace(
        "locales/messages.ru.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.ru.json",
            res_chars::f_5357_locales_messages_ru_json_begin,
            res_chars::f_5357_locales_messages_ru_json_end
        )
    );
    root_index.emplace(
        "locales/messages.tr.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.tr.json",
            res_chars::f_35bd_locales_messages_tr_json_begin,
            res_chars::f_35bd_locales_messages_tr_json_end
        )
    );
    root_index.emplace(
        "locales/messages.zh-Hans.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.zh-Hans.json",
            res_chars::f_56de_locales_messages_zh_Hans_json_begin,
            res_chars::f_56de_locales_messages_zh_Hans_json_end
        )
    );
    root_index.emplace(
        "locales/messages.zh-Hant.json",
        f_5e74_locales_dir.directory.add_file(
            "messages.zh-Hant.json",
            res_chars::f_8dcd_locales_messages_zh_Hant_json_begin,
            res_chars::f_8dcd_locales_messages_zh_Hant_json_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // cmakerc
} // cmrc
    