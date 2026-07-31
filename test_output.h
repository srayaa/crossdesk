// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
#include <cmath>
static_assert(1 == SLINT_VERSION_MAJOR && 17 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.17.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class ControllerEntry {
    public:
    slint::SharedString remote_id;
    slint::SharedString display_name;
    friend auto operator== (const class ControllerEntry &a, const class ControllerEntry &b) -> bool = default;
};

class FileTransferEntry {
    public:
    slint::SharedString name;
    slint::SharedString status;
    float progress;
    slint::SharedString speed;
    slint::SharedString size;
    friend auto operator== (const class FileTransferEntry &a, const class FileTransferEntry &b) -> bool = default;
};

class NetworkStatsRow {
    public:
    slint::SharedString label;
    slint::SharedString inbound;
    slint::SharedString outbound;
    slint::SharedString loss_rate;
    friend auto operator== (const class NetworkStatsRow &a, const class NetworkStatsRow &b) -> bool = default;
};

class RecentConnection {
    public:
    slint::SharedString remote_id;
    slint::SharedString display_name;
    slint::SharedString host_name;
    bool online;
    slint::Image thumbnail;
    friend auto operator== (const class RecentConnection &a, const class RecentConnection &b) -> bool = default;
};

class ReleaseNoteBlock {
    public:
    slint::StyledText content;
    bool section_gap;
    friend auto operator== (const class ReleaseNoteBlock &a, const class ReleaseNoteBlock &b) -> bool = default;
};

class StreamTab {
    public:
    slint::SharedString remote_id;
    slint::SharedString title;
    bool connected;
    friend auto operator== (const class StreamTab &a, const class StreamTab &b) -> bool = default;
};

class MainWindow;

class ServerWindow;

class StreamWindow;

class SharedGlobals;

class IconButton_root_1;

class SectionTitle_root_9;

class OnlineStatusIndicator_root_10;

class DialogPromptText_root_12;

class LineEditBase_root_14;

class LineEditClearIcon_root_24;

class LineEditPasswordIcon_root_26;

class LineEdit_root_28;

class LineEditFocusUnderlineMask_root_37;

class PrimaryButton_root_39;

class SecondaryButton_root_42;

class ImGuiCheckBox_root_46;

class ConnectionDialogButton_root_50;

class MiniToggleSwitch_root_53;

class CompactComboBox_root_56;

class CompactButton_root_72;

class ToggleSwitch_root_75;

class ControlBarButton_root_78;

class MenuItemBase_root_89;

class MenuItem_root_105;

class Component_text_3 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class IconButton_root_1 const> parent;
    slint::private_api::Property<float> field_text_3_min_height;
    slint::private_api::Property<float> field_text_3_min_width;
    slint::private_api::Property<float> field_text_3_preferred_height;
    slint::private_api::Property<float> field_text_3_preferred_width;
    slint::private_api::Property<float> field_text_3_x;
    slint::private_api::Property<float> field_text_3_y;
    slint::cbindgen_private::SimpleText field_text_3 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class IconButton_root_1 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class IconButton_root_1 const * parent) -> slint::ComponentHandle<Component_text_3>;
    ~Component_text_3 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_3>;
};

class Component_rectangle_6 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class IconButton_root_1 const> parent;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_6_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_6_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_6_tip_7_min_height;
    slint::private_api::Property<float> field_rectangle_6_tip_7_min_width;
    slint::private_api::Property<float> field_rectangle_6_tip_7_preferred_height;
    slint::private_api::Property<float> field_rectangle_6_tip_7_preferred_width;
    slint::private_api::Property<float> field_rectangle_6_tip_7_x;
    slint::private_api::Property<float> field_rectangle_6_x;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_6 = {};
    slint::cbindgen_private::SimpleText field_tip_7 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class IconButton_root_1 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class IconButton_root_1 const * parent) -> slint::ComponentHandle<Component_rectangle_6>;
    ~Component_rectangle_6 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_6>;
};

class IconButton_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_1_danger;
    slint::private_api::Property<float> field_root_1_height;
    slint::private_api::Property<slint::Color> field_root_1_hover_background;
    slint::private_api::Property<slint::SharedString> field_root_1_icon;
    slint::private_api::Property<slint::Color> field_root_1_icon_color;
    slint::private_api::Property<float> field_root_1_icon_size;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_1_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_1_layoutinfo_v;
    slint::private_api::Property<slint::Color> field_root_1_normal_background;
    slint::private_api::Property<slint::Color> field_root_1_pressed_background;
    slint::private_api::Property<float> field_root_1_text_2_min_height;
    slint::private_api::Property<float> field_root_1_text_2_min_width;
    slint::private_api::Property<float> field_root_1_text_2_preferred_height;
    slint::private_api::Property<float> field_root_1_text_2_preferred_width;
    slint::private_api::Property<float> field_root_1_text_2_x;
    slint::private_api::Property<float> field_root_1_text_2_y;
    slint::private_api::Property<slint::SharedString> field_root_1_tooltip;
    slint::private_api::Property<float> field_root_1_width;
    slint::private_api::Property<float> field_root_1_x;
    slint::private_api::Property<float> field_root_1_y;
    slint::private_api::Callback<void()> field_root_1_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_1 = {};
    slint::cbindgen_private::ComplexText field_text_2 = {};
    slint::cbindgen_private::TouchArea field_touch_5 = {};
    slint::private_api::Conditional<class Component_text_3> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_6> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class SectionTitle_root_9 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_9_x;
    slint::private_api::Property<float> field_root_9_y;
    slint::cbindgen_private::SimpleText field_root_9 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class OnlineStatusIndicator_root_10 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_10_dot_diameter;
    slint::private_api::Property<float> field_root_10_rectangle_11_x;
    slint::private_api::Property<float> field_root_10_rectangle_11_y;
    slint::private_api::Property<float> field_root_10_x;
    slint::private_api::Property<float> field_root_10_y;
    slint::cbindgen_private::BasicBorderRectangle field_root_10 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_11 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class DialogPromptText_root_12 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_12_height;
    slint::private_api::Property<float> field_root_12_max_height;
    slint::private_api::Property<float> field_root_12_min_height;
    slint::private_api::Property<float> field_root_12_preferred_height;
    slint::private_api::Property<slint::SharedString> field_root_12_prompt;
    slint::private_api::Property<float> field_root_12_prompt_label_13_max_height;
    slint::private_api::Property<float> field_root_12_prompt_label_13_min_height;
    slint::private_api::Property<float> field_root_12_prompt_label_13_preferred_height;
    slint::private_api::Property<float> field_root_12_prompt_label_13_vertical_stretch;
    slint::private_api::Property<slint::Color> field_root_12_text_color;
    slint::private_api::Property<float> field_root_12_text_size;
    slint::private_api::Property<int> field_root_12_text_weight;
    slint::private_api::Property<float> field_root_12_vertical_stretch;
    slint::private_api::Property<float> field_root_12_width;
    slint::private_api::Property<float> field_root_12_x;
    slint::private_api::Property<float> field_root_12_y;
    slint::cbindgen_private::Empty field_root_12 = {};
    slint::cbindgen_private::ComplexText field_prompt_label_13 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_empty_19 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEditBase_root_14 const> parent;
    slint::cbindgen_private::Empty field_empty_19 = {};
    slint::cbindgen_private::MenuItem field_menuitem_20 = {};
    slint::cbindgen_private::MenuItem field_menuitem_21 = {};
    slint::cbindgen_private::MenuItem field_menuitem_22 = {};
    slint::cbindgen_private::MenuItem field_menuitem_23 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEditBase_root_14 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEditBase_root_14 const * parent) -> slint::ComponentHandle<Component_empty_19>;
    ~Component_empty_19 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_19>;
};

class LineEditBase_root_14 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_14_has_focus;
    slint::private_api::Property<float> field_root_14_height;
    slint::private_api::Property<slint::cbindgen_private::InputType> field_root_14_input_type;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_14_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_14_layoutinfo_v;
    slint::private_api::Property<float> field_root_14_margin;
    slint::private_api::Property<float> field_root_14_min_height;
    slint::private_api::Property<bool> field_root_14_password_revealed;
    slint::private_api::Property<float> field_root_14_placeholder_16_horizontal_stretch;
    slint::private_api::Property<float> field_root_14_placeholder_16_max_height;
    slint::private_api::Property<float> field_root_14_placeholder_16_max_width;
    slint::private_api::Property<float> field_root_14_placeholder_16_min_height;
    slint::private_api::Property<float> field_root_14_placeholder_16_min_width;
    slint::private_api::Property<float> field_root_14_placeholder_16_preferred_height;
    slint::private_api::Property<float> field_root_14_placeholder_16_preferred_width;
    slint::private_api::Property<float> field_root_14_placeholder_16_vertical_stretch;
    slint::private_api::Property<slint::Brush> field_root_14_placeholder_color;
    slint::private_api::Property<slint::SharedString> field_root_14_placeholder_text;
    slint::private_api::Property<slint::Brush> field_root_14_text_color;
    slint::private_api::Property<float> field_root_14_text_input_18_computed_x;
    slint::private_api::Property<float> field_root_14_text_input_18_preferred_height;
    slint::private_api::Property<float> field_root_14_text_input_18_preferred_width;
    slint::private_api::Property<float> field_root_14_text_input_18_x;
    slint::private_api::Property<float> field_root_14_width;
    slint::private_api::Property<float> field_root_14_x;
    slint::private_api::Callback<void(slint::SharedString)> field_root_14_accepted;
    slint::private_api::Callback<void(slint::SharedString)> field_root_14_edited;
    slint::private_api::Callback<slint::cbindgen_private::EventResult(slint::language::KeyEvent)> field_root_14_key_pressed;
    slint::private_api::Callback<slint::cbindgen_private::EventResult(slint::language::KeyEvent)> field_root_14_key_released;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Empty field_root_14 = {};
    slint::cbindgen_private::Clip field_root_clip_15 = {};
    slint::cbindgen_private::ComplexText field_placeholder_16 = {};
    slint::cbindgen_private::ContextMenu field_contextmenuinternal_17 = {};
    slint::cbindgen_private::TextInput field_text_input_18 = {};
    auto fn_clear_focus () const -> void;
    auto fn_clear_selection () const -> void;
    auto fn_copy () const -> void;
    auto fn_cut () const -> void;
    auto fn_focus () const -> void;
    auto fn_paste () const -> void;
    auto fn_select_all () const -> void;
    auto fn_set_selection_offsets ([[maybe_unused]] int arg_0, [[maybe_unused]] int arg_1) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class LineEditClearIcon_root_24 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_24_x;
    slint::private_api::Callback<void()> field_root_24_clear;
    slint::cbindgen_private::ClippedImage field_root_24 = {};
    slint::cbindgen_private::TouchArea field_toucharea_25 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class LineEditPasswordIcon_root_26 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::Image> field_root_26_hide_password_image;
    slint::private_api::Property<bool> field_root_26_show_password;
    slint::private_api::Property<slint::Image> field_root_26_show_password_image;
    slint::private_api::Property<float> field_root_26_x;
    slint::private_api::Callback<void()> field_root_26_clicked;
    slint::cbindgen_private::ClippedImage field_root_26 = {};
    slint::cbindgen_private::TouchArea field_toucharea_27 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_lineeditclearicon_32 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEdit_root_28 const> parent;
    LineEditClearIcon_root_24 field_lineeditclearicon_32;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_28 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEdit_root_28 const * parent) -> slint::ComponentHandle<Component_lineeditclearicon_32>;
    ~Component_lineeditclearicon_32 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditclearicon_32>;
};

class Component_lineeditpasswordicon_34 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class LineEdit_root_28 const> parent;
    LineEditPasswordIcon_root_26 field_lineeditpasswordicon_34;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class LineEdit_root_28 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class LineEdit_root_28 const * parent) -> slint::ComponentHandle<Component_lineeditpasswordicon_34>;
    ~Component_lineeditpasswordicon_34 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_lineeditpasswordicon_34>;
};

class LineEdit_root_28 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_28_background_29_width;
    slint::private_api::Property<float> field_root_28_height;
    slint::private_api::Property<slint::SharedVector<float>> field_root_28_layout_30_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_28_layout_30_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_28_layout_30_layoutinfo_v;
    slint::private_api::Property<float> field_root_28_layout_30_min_height;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_28_layoutinfo_h;
    slint::private_api::Property<int> field_root_28_state;
    slint::private_api::Property<float> field_root_28_width;
    slint::private_api::Property<float> field_root_28_x;
    slint::private_api::Property<float> field_root_28_y;
    slint::private_api::Callback<void(slint::SharedString)> field_root_28_accessible_action_set_value;
    LineEditBase_root_14 field_base_31;
    slint::cbindgen_private::Empty field_root_28 = {};
    slint::cbindgen_private::BasicBorderRectangle field_background_29 = {};
    slint::cbindgen_private::BasicBorderRectangle field_focus_border_36 = {};
    slint::private_api::Conditional<class Component_lineeditclearicon_32> repeater_0;
    slint::private_api::Conditional<class Component_lineeditpasswordicon_34> repeater_1;
    auto fn_background_29_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layout_30_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class LineEditFocusUnderlineMask_root_37 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_37_width;
    slint::private_api::Property<float> field_root_37_x;
    slint::private_api::Property<float> field_root_37_y;
    slint::cbindgen_private::Rectangle field_root_37 = {};
    slint::cbindgen_private::Rectangle field_rectangle_38 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class PrimaryButton_root_39 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_39_enabled;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_39_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_39_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> field_root_39_text;
    slint::private_api::Property<float> field_root_39_text_40_min_height;
    slint::private_api::Property<float> field_root_39_text_40_min_width;
    slint::private_api::Property<float> field_root_39_text_40_preferred_height;
    slint::private_api::Property<float> field_root_39_text_40_preferred_width;
    slint::private_api::Property<float> field_root_39_text_40_x;
    slint::private_api::Property<float> field_root_39_width;
    slint::private_api::Property<float> field_root_39_x;
    slint::private_api::Property<float> field_root_39_y;
    slint::private_api::Callback<void()> field_root_39_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_39 = {};
    slint::cbindgen_private::SimpleText field_text_40 = {};
    slint::cbindgen_private::TouchArea field_touch_41 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class SecondaryButton_root_42 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_42_enabled;
    slint::private_api::Property<float> field_root_42_height;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_42_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_42_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> field_root_42_text;
    slint::private_api::Property<float> field_root_42_text_44_min_height;
    slint::private_api::Property<float> field_root_42_text_44_min_width;
    slint::private_api::Property<float> field_root_42_text_44_preferred_height;
    slint::private_api::Property<float> field_root_42_text_44_preferred_width;
    slint::private_api::Property<float> field_root_42_text_44_x;
    slint::private_api::Property<float> field_root_42_text_44_y;
    slint::private_api::Property<float> field_root_42_width;
    slint::private_api::Property<float> field_root_42_x;
    slint::private_api::Callback<void()> field_root_42_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_42 = {};
    slint::cbindgen_private::Clip field_root_clip_43 = {};
    slint::cbindgen_private::SimpleText field_text_44 = {};
    slint::cbindgen_private::TouchArea field_touch_45 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_text_47 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ImGuiCheckBox_root_46 const> parent;
    slint::private_api::Property<float> field_text_47_min_height;
    slint::private_api::Property<float> field_text_47_min_width;
    slint::private_api::Property<float> field_text_47_preferred_height;
    slint::private_api::Property<float> field_text_47_preferred_width;
    slint::cbindgen_private::ComplexText field_text_47 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ImGuiCheckBox_root_46 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ImGuiCheckBox_root_46 const * parent) -> slint::ComponentHandle<Component_text_47>;
    ~Component_text_47 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_47>;
};

class ImGuiCheckBox_root_46 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_46_checked;
    slint::private_api::Property<bool> field_root_46_enabled;
    slint::private_api::Property<float> field_root_46_x;
    slint::private_api::Property<float> field_root_46_y;
    slint::cbindgen_private::BasicBorderRectangle field_root_46 = {};
    slint::cbindgen_private::TouchArea field_check_touch_49 = {};
    slint::private_api::Conditional<class Component_text_47> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class ConnectionDialogButton_root_50 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_50_button_label_51_min_height;
    slint::private_api::Property<float> field_root_50_button_label_51_min_width;
    slint::private_api::Property<float> field_root_50_button_label_51_preferred_height;
    slint::private_api::Property<float> field_root_50_button_label_51_preferred_width;
    slint::private_api::Property<float> field_root_50_button_label_51_x;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_50_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_50_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> field_root_50_text;
    slint::private_api::Property<float> field_root_50_x;
    slint::private_api::Property<float> field_root_50_y;
    slint::private_api::Callback<void()> field_root_50_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_50 = {};
    slint::cbindgen_private::SimpleText field_button_label_51 = {};
    slint::cbindgen_private::TouchArea field_button_touch_52 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class MiniToggleSwitch_root_53 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_53_checked;
    slint::private_api::Property<bool> field_root_53_enabled;
    slint::private_api::Property<float> field_root_53_x;
    slint::private_api::Property<float> field_root_53_y;
    slint::private_api::Callback<void(bool)> field_root_53_toggled;
    slint::cbindgen_private::BasicBorderRectangle field_root_53 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_54 = {};
    slint::cbindgen_private::TouchArea field_toucharea_55 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_rectangle_67 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_combo_popup_63 const> parent;
    slint::private_api::Property<slint::SharedString> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_67_text_68_min_height;
    slint::private_api::Property<float> field_rectangle_67_text_68_preferred_height;
    slint::cbindgen_private::Rectangle field_rectangle_67 = {};
    slint::cbindgen_private::ComplexText field_text_68 = {};
    slint::cbindgen_private::TouchArea field_option_touch_69 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_combo_popup_63 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_combo_popup_63 const * parent) -> slint::ComponentHandle<Component_rectangle_67>;
    ~Component_rectangle_67 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::SharedString &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_67>;
};

class Component_combo_popup_63 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class CompactComboBox_root_56 const> parent;
    slint::private_api::Property<float> field_combo_popup_63_fixed_width;
    slint::private_api::Property<float> field_combo_popup_63_rectangle_65_height;
    slint::private_api::Property<float> field_combo_popup_63_rectangle_65_width;
    slint::private_api::Property<float> field_combo_popup_63_x;
    slint::private_api::Property<float> field_combo_popup_63_y;
    slint::cbindgen_private::WindowItem field_combo_popup_63 = {};
    slint::cbindgen_private::Opacity field__Opacity_64 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_65 = {};
    slint::cbindgen_private::Clip field__clip_66 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_71 = {};
    slint::private_api::Repeater<class Component_rectangle_67, slint::SharedString> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class CompactComboBox_root_56 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class CompactComboBox_root_56 const * parent,const SharedGlobals *globals) -> slint::ComponentHandle<Component_combo_popup_63>;
    ~Component_combo_popup_63 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_combo_popup_63>;
};

class CompactComboBox_root_56 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<int> field_root_56_current_index;
    slint::private_api::Property<bool> field_root_56_enabled;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> field_root_56_model;
    slint::private_api::Property<std::int64_t> field_root_56_optimized_popup_open_timer_57_interval;
    slint::private_api::Property<bool> field_root_56_optimized_popup_open_timer_57_running;
    slint::private_api::Property<bool> field_root_56_popup_animation_enabled;
    slint::private_api::Property<bool> field_root_56_popup_combo_popup_is_open;
    slint::private_api::Property<float> field_root_56_popup_progress;
    slint::private_api::Property<float> field_root_56_text_58_min_height;
    slint::private_api::Property<float> field_root_56_text_58_preferred_height;
    slint::private_api::Property<float> field_root_56_text_61_min_height;
    slint::private_api::Property<float> field_root_56_text_61_min_width;
    slint::private_api::Property<float> field_root_56_text_61_preferred_height;
    slint::private_api::Property<float> field_root_56_text_61_preferred_width;
    slint::private_api::Property<float> field_root_56_width;
    slint::private_api::Property<float> field_root_56_x;
    slint::private_api::Property<float> field_root_56_y;
    slint::private_api::Callback<void()> field_root_56_optimized_popup_open_timer_57_triggered;
    slint::private_api::Callback<void(int)> field_root_56_selected;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    mutable uint32_t popup_id_0;
    slint::cbindgen_private::BasicBorderRectangle field_root_56 = {};
    slint::cbindgen_private::ComplexText field_text_58 = {};
    slint::cbindgen_private::Rectangle field_rectangle_59 = {};
    slint::cbindgen_private::Transform field__Transform_60 = {};
    slint::cbindgen_private::ComplexText field_text_61 = {};
    slint::cbindgen_private::TouchArea field_toucharea_62 = {};
    slint::Timer timer0;
    auto update_timers () -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class CompactButton_root_72 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_72_enabled;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_layoutinfo_v;
    slint::private_api::Property<bool> field_root_72_primary;
    slint::private_api::Property<slint::SharedString> field_root_72_text;
    slint::private_api::Property<float> field_root_72_text_73_min_height;
    slint::private_api::Property<float> field_root_72_text_73_min_width;
    slint::private_api::Property<float> field_root_72_text_73_preferred_height;
    slint::private_api::Property<float> field_root_72_text_73_preferred_width;
    slint::private_api::Property<float> field_root_72_text_73_x;
    slint::private_api::Property<float> field_root_72_width;
    slint::private_api::Property<float> field_root_72_x;
    slint::private_api::Property<float> field_root_72_y;
    slint::private_api::Callback<void()> field_root_72_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_72 = {};
    slint::cbindgen_private::ComplexText field_text_73 = {};
    slint::cbindgen_private::TouchArea field_button_touch_74 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class ToggleSwitch_root_75 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_75_checked;
    slint::private_api::Property<bool> field_root_75_enabled;
    slint::private_api::Property<float> field_root_75_rectangle_76_x;
    slint::private_api::Property<float> field_root_75_x;
    slint::private_api::Callback<void(bool)> field_root_75_toggled;
    slint::cbindgen_private::BasicBorderRectangle field_root_75 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_76 = {};
    slint::cbindgen_private::TouchArea field_toucharea_77 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_text_80 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ControlBarButton_root_78 const> parent;
    slint::private_api::Property<float> field_text_80_min_height;
    slint::private_api::Property<float> field_text_80_min_width;
    slint::private_api::Property<float> field_text_80_preferred_height;
    slint::private_api::Property<float> field_text_80_preferred_width;
    slint::private_api::Property<float> field_text_80_x;
    slint::cbindgen_private::SimpleText field_text_80 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ControlBarButton_root_78 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ControlBarButton_root_78 const * parent) -> slint::ComponentHandle<Component_text_80>;
    ~Component_text_80 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_80>;
};

class Component__Transform_82 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ControlBarButton_root_78 const> parent;
    slint::cbindgen_private::Transform field__Transform_82 = {};
    slint::cbindgen_private::Rectangle field_rectangle_83 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ControlBarButton_root_78 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ControlBarButton_root_78 const * parent) -> slint::ComponentHandle<Component__Transform_82>;
    ~Component__Transform_82 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__Transform_82>;
};

class Component__Transform_85 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ControlBarButton_root_78 const> parent;
    slint::cbindgen_private::Transform field__Transform_85 = {};
    slint::cbindgen_private::Rectangle field_rectangle_86 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ControlBarButton_root_78 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ControlBarButton_root_78 const * parent) -> slint::ComponentHandle<Component__Transform_85>;
    ~Component__Transform_85 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__Transform_85>;
};

class ControlBarButton_root_78 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedString> field_root_78_badge;
    slint::private_api::Property<slint::SharedString> field_root_78_icon;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_78_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_78_layoutinfo_v;
    slint::private_api::Property<bool> field_root_78_selected;
    slint::private_api::Property<bool> field_root_78_slashed;
    slint::private_api::Property<float> field_root_78_text_79_min_height;
    slint::private_api::Property<float> field_root_78_text_79_min_width;
    slint::private_api::Property<float> field_root_78_text_79_preferred_height;
    slint::private_api::Property<float> field_root_78_text_79_preferred_width;
    slint::private_api::Property<float> field_root_78_text_79_x;
    slint::private_api::Property<float> field_root_78_width;
    slint::private_api::Property<float> field_root_78_x;
    slint::private_api::Property<float> field_root_78_y;
    slint::private_api::Callback<void()> field_root_78_clicked;
    slint::cbindgen_private::BasicBorderRectangle field_root_78 = {};
    slint::cbindgen_private::ComplexText field_text_79 = {};
    slint::cbindgen_private::TouchArea field_touch_88 = {};
    slint::private_api::Conditional<class Component_text_80> repeater_0;
    slint::private_api::Conditional<class Component__Transform_82> repeater_1;
    slint::private_api::Conditional<class Component__Transform_85> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_text_95 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_89 const> parent;
    slint::private_api::Property<float> field_text_95_min_height;
    slint::private_api::Property<float> field_text_95_min_width;
    slint::private_api::Property<float> field_text_95_preferred_height;
    slint::private_api::Property<float> field_text_95_preferred_width;
    slint::private_api::Property<float> field_text_95_x;
    slint::private_api::Property<float> field_text_95_y;
    slint::cbindgen_private::SimpleText field_text_95 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_89 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_89 const * parent) -> slint::ComponentHandle<Component_text_95>;
    ~Component_text_95 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_95>;
};

class Component_image_101 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_89 const> parent;
    slint::cbindgen_private::ImageItem field_image_101 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_89 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_89 const * parent) -> slint::ComponentHandle<Component_image_101>;
    ~Component_image_101 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_101>;
};

class Component_rectangle_103 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItemBase_root_89 const> parent;
    slint::cbindgen_private::Rectangle field_rectangle_103 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItemBase_root_89 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItemBase_root_89 const * parent) -> slint::ComponentHandle<Component_rectangle_103>;
    ~Component_rectangle_103 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_103>;
};

class MenuItemBase_root_89 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::Brush> field_root_89_alternate_foreground;
    slint::private_api::Property<float> field_root_89_background_layer_90_height;
    slint::private_api::Property<float> field_root_89_background_layer_90_width;
    slint::private_api::Property<slint::Brush> field_root_89_current_background;
    slint::private_api::Property<slint::Brush> field_root_89_current_foreground;
    slint::private_api::Property<slint::Brush> field_root_89_default_foreground;
    slint::private_api::Property<slint::cbindgen_private::MenuEntry> field_root_89_entry;
    slint::private_api::Property<bool> field_root_89_had_press;
    slint::private_api::Property<float> field_root_89_height;
    slint::private_api::Property<float> field_root_89_horizontal_padding;
    slint::private_api::Property<float> field_root_89_icon_size;
    slint::private_api::Property<float> field_root_89_image_97_preferred_height;
    slint::private_api::Property<float> field_root_89_image_97_preferred_width;
    slint::private_api::Property<float> field_root_89_image_97_y;
    slint::private_api::Property<bool> field_root_89_is_current;
    slint::private_api::Property<slint::cbindgen_private::FontMetrics> field_root_89_label_99_font_metrics;
    slint::private_api::Property<slint::SharedVector<float>> field_root_89_layout_93_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_89_layout_93_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_89_layout_93_layoutinfo_v;
    slint::private_api::Property<float> field_root_89_layout_93_padding_bottom;
    slint::private_api::Property<float> field_root_89_layout_93_padding_top;
    slint::private_api::Property<float> field_root_89_layout_93_spacing;
    slint::private_api::Property<std::int64_t> field_root_89_open_time;
    slint::private_api::Property<slint::Brush> field_root_89_separator_color;
    slint::private_api::Property<int> field_root_89_state;
    slint::private_api::Property<slint::Image> field_root_89_sub_menu_icon;
    slint::private_api::Property<slint::LogicalPosition> field_root_89_touch_area_92_absolute_position;
    slint::private_api::Property<float> field_root_89_touch_area_92_height;
    slint::private_api::Property<float> field_root_89_touch_area_92_width;
    slint::private_api::Property<float> field_root_89_width;
    slint::private_api::Property<float> field_root_89_x;
    slint::private_api::Property<float> field_root_89_y;
    slint::private_api::Callback<void(slint::cbindgen_private::MenuEntry, float)> field_root_89_activate;
    slint::private_api::Callback<void()> field_root_89_clear_current;
    slint::private_api::Callback<void()> field_root_89_set_current;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Empty field_root_89 = {};
    slint::cbindgen_private::BasicBorderRectangle field_background_layer_90 = {};
    slint::cbindgen_private::Clip field_touch_area_visibility_91 = {};
    slint::cbindgen_private::TouchArea field_touch_area_92 = {};
    slint::cbindgen_private::Empty field_rectangle_94 = {};
    slint::cbindgen_private::ImageItem field_image_97 = {};
    slint::cbindgen_private::Opacity field_label_Opacity_98 = {};
    slint::cbindgen_private::SimpleText field_label_99 = {};
    slint::cbindgen_private::SimpleText field_shortcut_100 = {};
    slint::private_api::Conditional<class Component_text_95> repeater_0;
    slint::private_api::Conditional<class Component_image_101> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_103> repeater_2;
    auto fn_background_layer_90_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layout_93_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_94_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_92_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class MenuItem_root_105 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_105_base_107_max_height;
    slint::private_api::Property<float> field_root_105_base_107_min_height;
    slint::private_api::Property<slint::SharedVector<float>> field_root_105_empty_106_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_105_empty_106_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_105_empty_106_layoutinfo_v;
    slint::private_api::Property<float> field_root_105_empty_106_padding;
    slint::private_api::Property<float> field_root_105_height;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_105_layoutinfo_v;
    slint::private_api::Property<float> field_root_105_max_height;
    slint::private_api::Property<float> field_root_105_min_height;
    slint::private_api::Property<float> field_root_105_width;
    slint::private_api::Property<float> field_root_105_x;
    slint::private_api::Property<float> field_root_105_y;
    MenuItemBase_root_89 field_base_107;
    slint::cbindgen_private::Empty field_root_105 = {};
    auto fn_empty_106_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class StreamStrings {
    public:
    slint::private_api::Property<slint::SharedString> field_audio;
    slint::private_api::Property<slint::SharedString> field_collapse_control;
    slint::private_api::Property<slint::SharedString> field_control_mouse;
    slint::private_api::Property<slint::SharedString> field_disconnect;
    slint::private_api::Property<slint::SharedString> field_exit_fullscreen;
    slint::private_api::Property<slint::SharedString> field_expand_control;
    slint::private_api::Property<slint::SharedString> field_file_transfer;
    slint::private_api::Property<slint::SharedString> field_fullscreen;
    slint::private_api::Property<slint::SharedString> field_hide_stats;
    slint::private_api::Property<slint::SharedString> field_mute;
    slint::private_api::Property<slint::SharedString> field_release_mouse;
    slint::private_api::Property<slint::SharedString> field_select_display;
    slint::private_api::Property<slint::SharedString> field_select_file;
    slint::private_api::Property<slint::SharedString> field_send_shortcut;
    slint::private_api::Property<slint::SharedString> field_show_stats;
    slint::private_api::Property<slint::SharedString> field_stats_connection_mode;
    slint::private_api::Property<slint::SharedString> field_stats_in;
    slint::private_api::Property<slint::SharedString> field_stats_loss_rate;
    slint::private_api::Property<slint::SharedString> field_stats_out;
    slint::private_api::Property<slint::SharedString> field_stats_resolution;
    StreamStrings (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto get_audio () const -> slint::SharedString;
    auto set_audio (const slint::SharedString &value) const -> void;
    auto get_collapse_control () const -> slint::SharedString;
    auto set_collapse_control (const slint::SharedString &value) const -> void;
    auto get_control_mouse () const -> slint::SharedString;
    auto set_control_mouse (const slint::SharedString &value) const -> void;
    auto get_disconnect () const -> slint::SharedString;
    auto set_disconnect (const slint::SharedString &value) const -> void;
    auto get_exit_fullscreen () const -> slint::SharedString;
    auto set_exit_fullscreen (const slint::SharedString &value) const -> void;
    auto get_expand_control () const -> slint::SharedString;
    auto set_expand_control (const slint::SharedString &value) const -> void;
    auto get_file_transfer () const -> slint::SharedString;
    auto set_file_transfer (const slint::SharedString &value) const -> void;
    auto get_fullscreen () const -> slint::SharedString;
    auto set_fullscreen (const slint::SharedString &value) const -> void;
    auto get_hide_stats () const -> slint::SharedString;
    auto set_hide_stats (const slint::SharedString &value) const -> void;
    auto get_mute () const -> slint::SharedString;
    auto set_mute (const slint::SharedString &value) const -> void;
    auto get_release_mouse () const -> slint::SharedString;
    auto set_release_mouse (const slint::SharedString &value) const -> void;
    auto get_select_display () const -> slint::SharedString;
    auto set_select_display (const slint::SharedString &value) const -> void;
    auto get_select_file () const -> slint::SharedString;
    auto set_select_file (const slint::SharedString &value) const -> void;
    auto get_send_shortcut () const -> slint::SharedString;
    auto set_send_shortcut (const slint::SharedString &value) const -> void;
    auto get_show_stats () const -> slint::SharedString;
    auto set_show_stats (const slint::SharedString &value) const -> void;
    auto get_stats_connection_mode () const -> slint::SharedString;
    auto set_stats_connection_mode (const slint::SharedString &value) const -> void;
    auto get_stats_in () const -> slint::SharedString;
    auto set_stats_in (const slint::SharedString &value) const -> void;
    auto get_stats_loss_rate () const -> slint::SharedString;
    auto set_stats_loss_rate (const slint::SharedString &value) const -> void;
    auto get_stats_out () const -> slint::SharedString;
    auto set_stats_out (const slint::SharedString &value) const -> void;
    auto get_stats_resolution () const -> slint::SharedString;
    auto set_stats_resolution (const slint::SharedString &value) const -> void;
    friend class SharedGlobals;
};

class UiStrings {
    public:
    slint::private_api::Property<slint::SharedString> field_about;
    slint::private_api::Property<slint::SharedString> field_access_website;
    slint::private_api::Property<slint::SharedString> field_accessibility_permission;
    slint::private_api::Property<slint::SharedString> field_autostart;
    slint::private_api::Property<slint::SharedString> field_cancel;
    slint::private_api::Property<slint::SharedString> field_codec;
    slint::private_api::Property<slint::SharedString> field_codec_av1;
    slint::private_api::Property<slint::SharedString> field_codec_h264;
    slint::private_api::Property<slint::SharedString> field_confirm_delete;
    slint::private_api::Property<slint::SharedString> field_connect;
    slint::private_api::Property<slint::SharedString> field_copied;
    slint::private_api::Property<slint::SharedString> field_copyright;
    slint::private_api::Property<slint::SharedString> field_coturn_port;
    slint::private_api::Property<slint::SharedString> field_daemon;
    slint::private_api::Property<slint::SharedString> field_default_desktop;
    slint::private_api::Property<slint::SharedString> field_delete_connection;
    slint::private_api::Property<slint::SharedString> field_device_name;
    slint::private_api::Property<slint::SharedString> field_do_not_remind;
    slint::private_api::Property<slint::SharedString> field_download;
    slint::private_api::Property<slint::SharedString> field_edit_alias;
    slint::private_api::Property<slint::SharedString> field_file_save_path;
    slint::private_api::Property<slint::SharedString> field_frame_rate;
    slint::private_api::Property<slint::SharedString> field_hardware_codec;
    slint::private_api::Property<slint::SharedString> field_input_password;
    slint::private_api::Property<slint::SharedString> field_install_service;
    slint::private_api::Property<slint::SharedString> field_invalid_password;
    slint::private_api::Property<slint::SharedString> field_language;
    slint::private_api::Property<slint::SharedString> field_later;
    slint::private_api::Property<slint::SharedString> field_license;
    slint::private_api::Property<slint::SharedString> field_local_desktop;
    slint::private_api::Property<slint::SharedString> field_local_id;
    slint::private_api::Property<slint::SharedString> field_minimize_to_tray;
    slint::private_api::Property<slint::SharedString> field_new_password;
    slint::private_api::Property<slint::SharedString> field_notification;
    slint::private_api::Property<slint::SharedString> field_offline;
    slint::private_api::Property<slint::SharedString> field_ok;
    slint::private_api::Property<slint::SharedString> field_online;
    slint::private_api::Property<slint::SharedString> field_password;
    slint::private_api::Property<slint::SharedString> field_permission_required;
    slint::private_api::Property<slint::SharedString> field_quality_high;
    slint::private_api::Property<slint::SharedString> field_quality_low;
    slint::private_api::Property<slint::SharedString> field_quality_medium;
    slint::private_api::Property<slint::SharedString> field_recent_connections;
    slint::private_api::Property<slint::SharedString> field_reinput_password;
    slint::private_api::Property<slint::SharedString> field_release_date_label;
    slint::private_api::Property<slint::SharedString> field_release_notes;
    slint::private_api::Property<slint::SharedString> field_remember_password;
    slint::private_api::Property<slint::SharedString> field_remote_desktop;
    slint::private_api::Property<slint::SharedString> field_remote_id;
    slint::private_api::Property<slint::SharedString> field_request_permissions;
    slint::private_api::Property<slint::SharedString> field_save;
    slint::private_api::Property<slint::SharedString> field_screen_recording_permission;
    slint::private_api::Property<slint::SharedString> field_self_hosted;
    slint::private_api::Property<slint::SharedString> field_self_hosted_settings;
    slint::private_api::Property<slint::SharedString> field_server_host;
    slint::private_api::Property<slint::SharedString> field_server_port;
    slint::private_api::Property<slint::SharedString> field_service_installed;
    slint::private_api::Property<slint::SharedString> field_service_settings_label;
    slint::private_api::Property<slint::SharedString> field_service_setup_message;
    slint::private_api::Property<slint::SharedString> field_service_setup_title;
    slint::private_api::Property<slint::SharedString> field_service_suppressed_message;
    slint::private_api::Property<slint::SharedString> field_settings;
    slint::private_api::Property<slint::SharedString> field_signal_connected;
    slint::private_api::Property<slint::SharedString> field_signal_disconnected;
    slint::private_api::Property<slint::SharedString> field_srtp;
    slint::private_api::Property<slint::SharedString> field_tls_error;
    slint::private_api::Property<slint::SharedString> field_turn_relay;
    slint::private_api::Property<slint::SharedString> field_update_available;
    slint::private_api::Property<slint::SharedString> field_validate_password;
    slint::private_api::Property<slint::SharedString> field_version;
    slint::private_api::Property<slint::SharedString> field_video_quality;
    UiStrings (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto get_about () const -> slint::SharedString;
    auto set_about (const slint::SharedString &value) const -> void;
    auto get_access_website () const -> slint::SharedString;
    auto set_access_website (const slint::SharedString &value) const -> void;
    auto get_accessibility_permission () const -> slint::SharedString;
    auto set_accessibility_permission (const slint::SharedString &value) const -> void;
    auto get_autostart () const -> slint::SharedString;
    auto set_autostart (const slint::SharedString &value) const -> void;
    auto get_cancel () const -> slint::SharedString;
    auto set_cancel (const slint::SharedString &value) const -> void;
    auto get_codec () const -> slint::SharedString;
    auto set_codec (const slint::SharedString &value) const -> void;
    auto get_codec_av1 () const -> slint::SharedString;
    auto set_codec_av1 (const slint::SharedString &value) const -> void;
    auto get_codec_h264 () const -> slint::SharedString;
    auto set_codec_h264 (const slint::SharedString &value) const -> void;
    auto get_confirm_delete () const -> slint::SharedString;
    auto set_confirm_delete (const slint::SharedString &value) const -> void;
    auto get_connect () const -> slint::SharedString;
    auto set_connect (const slint::SharedString &value) const -> void;
    auto get_copied () const -> slint::SharedString;
    auto set_copied (const slint::SharedString &value) const -> void;
    auto get_copyright () const -> slint::SharedString;
    auto set_copyright (const slint::SharedString &value) const -> void;
    auto get_coturn_port () const -> slint::SharedString;
    auto set_coturn_port (const slint::SharedString &value) const -> void;
    auto get_daemon () const -> slint::SharedString;
    auto set_daemon (const slint::SharedString &value) const -> void;
    auto get_default_desktop () const -> slint::SharedString;
    auto set_default_desktop (const slint::SharedString &value) const -> void;
    auto get_delete_connection () const -> slint::SharedString;
    auto set_delete_connection (const slint::SharedString &value) const -> void;
    auto get_device_name () const -> slint::SharedString;
    auto set_device_name (const slint::SharedString &value) const -> void;
    auto get_do_not_remind () const -> slint::SharedString;
    auto set_do_not_remind (const slint::SharedString &value) const -> void;
    auto get_download () const -> slint::SharedString;
    auto set_download (const slint::SharedString &value) const -> void;
    auto get_edit_alias () const -> slint::SharedString;
    auto set_edit_alias (const slint::SharedString &value) const -> void;
    auto get_file_save_path () const -> slint::SharedString;
    auto set_file_save_path (const slint::SharedString &value) const -> void;
    auto get_frame_rate () const -> slint::SharedString;
    auto set_frame_rate (const slint::SharedString &value) const -> void;
    auto get_hardware_codec () const -> slint::SharedString;
    auto set_hardware_codec (const slint::SharedString &value) const -> void;
    auto get_input_password () const -> slint::SharedString;
    auto set_input_password (const slint::SharedString &value) const -> void;
    auto get_install_service () const -> slint::SharedString;
    auto set_install_service (const slint::SharedString &value) const -> void;
    auto get_invalid_password () const -> slint::SharedString;
    auto set_invalid_password (const slint::SharedString &value) const -> void;
    auto get_language () const -> slint::SharedString;
    auto set_language (const slint::SharedString &value) const -> void;
    auto get_later () const -> slint::SharedString;
    auto set_later (const slint::SharedString &value) const -> void;
    auto get_license () const -> slint::SharedString;
    auto set_license (const slint::SharedString &value) const -> void;
    auto get_local_desktop () const -> slint::SharedString;
    auto set_local_desktop (const slint::SharedString &value) const -> void;
    auto get_local_id () const -> slint::SharedString;
    auto set_local_id (const slint::SharedString &value) const -> void;
    auto get_minimize_to_tray () const -> slint::SharedString;
    auto set_minimize_to_tray (const slint::SharedString &value) const -> void;
    auto get_new_password () const -> slint::SharedString;
    auto set_new_password (const slint::SharedString &value) const -> void;
    auto get_notification () const -> slint::SharedString;
    auto set_notification (const slint::SharedString &value) const -> void;
    auto get_offline () const -> slint::SharedString;
    auto set_offline (const slint::SharedString &value) const -> void;
    auto get_ok () const -> slint::SharedString;
    auto set_ok (const slint::SharedString &value) const -> void;
    auto get_online () const -> slint::SharedString;
    auto set_online (const slint::SharedString &value) const -> void;
    auto get_password () const -> slint::SharedString;
    auto set_password (const slint::SharedString &value) const -> void;
    auto get_permission_required () const -> slint::SharedString;
    auto set_permission_required (const slint::SharedString &value) const -> void;
    auto get_quality_high () const -> slint::SharedString;
    auto set_quality_high (const slint::SharedString &value) const -> void;
    auto get_quality_low () const -> slint::SharedString;
    auto set_quality_low (const slint::SharedString &value) const -> void;
    auto get_quality_medium () const -> slint::SharedString;
    auto set_quality_medium (const slint::SharedString &value) const -> void;
    auto get_recent_connections () const -> slint::SharedString;
    auto set_recent_connections (const slint::SharedString &value) const -> void;
    auto get_reinput_password () const -> slint::SharedString;
    auto set_reinput_password (const slint::SharedString &value) const -> void;
    auto get_release_date_label () const -> slint::SharedString;
    auto set_release_date_label (const slint::SharedString &value) const -> void;
    auto get_release_notes () const -> slint::SharedString;
    auto set_release_notes (const slint::SharedString &value) const -> void;
    auto get_remember_password () const -> slint::SharedString;
    auto set_remember_password (const slint::SharedString &value) const -> void;
    auto get_remote_desktop () const -> slint::SharedString;
    auto set_remote_desktop (const slint::SharedString &value) const -> void;
    auto get_remote_id () const -> slint::SharedString;
    auto set_remote_id (const slint::SharedString &value) const -> void;
    auto get_request_permissions () const -> slint::SharedString;
    auto set_request_permissions (const slint::SharedString &value) const -> void;
    auto get_save () const -> slint::SharedString;
    auto set_save (const slint::SharedString &value) const -> void;
    auto get_screen_recording_permission () const -> slint::SharedString;
    auto set_screen_recording_permission (const slint::SharedString &value) const -> void;
    auto get_self_hosted () const -> slint::SharedString;
    auto set_self_hosted (const slint::SharedString &value) const -> void;
    auto get_self_hosted_settings () const -> slint::SharedString;
    auto set_self_hosted_settings (const slint::SharedString &value) const -> void;
    auto get_server_host () const -> slint::SharedString;
    auto set_server_host (const slint::SharedString &value) const -> void;
    auto get_server_port () const -> slint::SharedString;
    auto set_server_port (const slint::SharedString &value) const -> void;
    auto get_service_installed () const -> slint::SharedString;
    auto set_service_installed (const slint::SharedString &value) const -> void;
    auto get_service_settings_label () const -> slint::SharedString;
    auto set_service_settings_label (const slint::SharedString &value) const -> void;
    auto get_service_setup_message () const -> slint::SharedString;
    auto set_service_setup_message (const slint::SharedString &value) const -> void;
    auto get_service_setup_title () const -> slint::SharedString;
    auto set_service_setup_title (const slint::SharedString &value) const -> void;
    auto get_service_suppressed_message () const -> slint::SharedString;
    auto set_service_suppressed_message (const slint::SharedString &value) const -> void;
    auto get_settings () const -> slint::SharedString;
    auto set_settings (const slint::SharedString &value) const -> void;
    auto get_signal_connected () const -> slint::SharedString;
    auto set_signal_connected (const slint::SharedString &value) const -> void;
    auto get_signal_disconnected () const -> slint::SharedString;
    auto set_signal_disconnected (const slint::SharedString &value) const -> void;
    auto get_srtp () const -> slint::SharedString;
    auto set_srtp (const slint::SharedString &value) const -> void;
    auto get_tls_error () const -> slint::SharedString;
    auto set_tls_error (const slint::SharedString &value) const -> void;
    auto get_turn_relay () const -> slint::SharedString;
    auto set_turn_relay (const slint::SharedString &value) const -> void;
    auto get_update_available () const -> slint::SharedString;
    auto set_update_available (const slint::SharedString &value) const -> void;
    auto get_validate_password () const -> slint::SharedString;
    auto set_validate_password (const slint::SharedString &value) const -> void;
    auto get_version () const -> slint::SharedString;
    auto set_version (const slint::SharedString &value) const -> void;
    auto get_video_quality () const -> slint::SharedString;
    auto set_video_quality (const slint::SharedString &value) const -> void;
    friend class SharedGlobals;
};

class FluentPalette_723 {
    public:
    slint::private_api::Property<slint::Brush> field_accent_background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> field_color_scheme;
    slint::private_api::Property<bool> field_dark_color_scheme;
    slint::private_api::Property<slint::Brush> field_foreground;
    slint::private_api::Property<slint::Brush> field_selection_background;
    slint::private_api::Property<slint::Brush> field_selection_foreground;
    FluentPalette_723 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<StreamStrings> global_StreamStrings = std::make_shared<StreamStrings>(this);
    std::shared_ptr<UiStrings> global_UiStrings = std::make_shared<UiStrings>(this);
    std::shared_ptr<FluentPalette_723> global_FluentPalette_723 = std::make_shared<FluentPalette_723>(this);
    SharedGlobals (){
    }
    auto init_globals () -> void{
        global_StreamStrings->init();
        global_UiStrings->init();
        global_FluentPalette_723->init();
    }
    private:
    SharedGlobals (const SharedGlobals& source, const slint::private_api::WindowAdapterRc& adapter) : root_weak(source.root_weak), global_StreamStrings(source.global_StreamStrings), global_UiStrings(source.global_UiStrings), global_FluentPalette_723(source.global_FluentPalette_723){
        m_window.emplace(adapter);
    }
    public:
    auto clone_with_window_adapter (const slint::private_api::WindowAdapterRc& adapter) const -> SharedGlobals*{
        return new SharedGlobals(*this, adapter);
    }
};

class Component_menuitem_714 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class PopupMenuImpl_root_707 const> parent;
    slint::private_api::Property<slint::cbindgen_private::MenuEntry> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<slint::LogicalPosition> field_menuitem_714_absolute_position;
    slint::private_api::ChangeTracker change_tracker0;
    MenuItem_root_105 field_menuitem_714;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class PopupMenuImpl_root_707 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class PopupMenuImpl_root_707 const * parent) -> slint::ComponentHandle<Component_menuitem_714>;
    ~Component_menuitem_714 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::cbindgen_private::MenuEntry &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_714>;
};

class Component_keybinding_716 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class PopupMenuImpl_root_707 const> parent;
    slint::private_api::Property<slint::cbindgen_private::MenuEntry> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_keybinding_716_height;
    slint::private_api::Property<float> field_keybinding_716_min_height;
    slint::private_api::Property<float> field_keybinding_716_min_width;
    slint::private_api::Property<float> field_keybinding_716_preferred_height;
    slint::private_api::Property<float> field_keybinding_716_preferred_width;
    slint::private_api::Property<float> field_keybinding_716_width;
    slint::private_api::Property<float> field_keybinding_716_x;
    slint::private_api::Property<float> field_keybinding_716_y;
    slint::cbindgen_private::KeyBinding field_keybinding_716 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class PopupMenuImpl_root_707 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class PopupMenuImpl_root_707 const * parent) -> slint::ComponentHandle<Component_keybinding_716>;
    ~Component_keybinding_716 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::cbindgen_private::MenuEntry &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_keybinding_716>;
};

class PopupMenuImpl_root_707 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::LogicalPosition> field_root_707_absolute_position;
    slint::private_api::Property<int> field_root_707_current_highlight;
    slint::private_api::Property<float> field_root_707_current_highlight_y_pos;
    slint::private_api::Property<int> field_root_707_current_open;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::cbindgen_private::MenuEntry>>> field_root_707_entries;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_707_frame_711_layoutinfo_h;
    slint::private_api::Property<slint::SharedVector<float>> field_root_707_layout_713_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_707_layout_713_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_707_layout_713_layoutinfo_v;
    slint::private_api::Property<float> field_root_707_layout_713_padding;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_707_layoutinfo_h;
    slint::private_api::Property<std::int64_t> field_root_707_optimized_open_sub_menu_after_timeout_708_interval;
    slint::private_api::Property<bool> field_root_707_optimized_open_sub_menu_after_timeout_708_running;
    slint::private_api::Property<slint::LogicalPosition> field_root_707_sub_menu_718_absolute_position;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::cbindgen_private::MenuEntry>>> field_root_707_sub_menu_718_entries;
    slint::private_api::Callback<void(slint::cbindgen_private::MenuEntry)> field_root_707_activated;
    slint::private_api::Property<uint8_t> callback_tracker_root_707_activated;
    slint::private_api::Callback<void()> field_root_707_close_popup;
    slint::private_api::Callback<void()> field_root_707_optimized_open_sub_menu_after_timeout_708_triggered;
    slint::private_api::Callback<std::shared_ptr<slint::Model<slint::cbindgen_private::MenuEntry>>(slint::cbindgen_private::MenuEntry)> field_root_707_sub_menu;
    slint::private_api::Property<uint8_t> callback_tracker_root_707_sub_menu;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::cbindgen_private::WindowItem field_root_707 = {};
    slint::cbindgen_private::FocusScope field_focus_scope_709 = {};
    slint::cbindgen_private::BoxShadow field_frame_shadow_710 = {};
    slint::cbindgen_private::BasicBorderRectangle field_frame_711 = {};
    slint::cbindgen_private::Clip field_frame_clip_712 = {};
    slint::cbindgen_private::ContextMenu field_sub_menu_718 = {};
    slint::private_api::Repeater<class Component_menuitem_714, slint::cbindgen_private::MenuEntry> repeater_0;
    slint::private_api::Repeater<class Component_keybinding_716, slint::cbindgen_private::MenuEntry> repeater_1;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_activate ([[maybe_unused]] slint::cbindgen_private::MenuEntry arg_0, [[maybe_unused]] float arg_1, [[maybe_unused]] int arg_2) const -> void;
    auto fn_focus () const -> void;
    auto fn_focus_scope_709_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_frame_711_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layout_713_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (const SharedGlobals *globals) -> slint::ComponentHandle<PopupMenuImpl_root_707>;
    ~PopupMenuImpl_root_707 ();
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, PopupMenuImpl_root_707>;
};

class Component_onlinestatusindicator_151 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_connection_card_147 const> parent;
    OnlineStatusIndicator_root_10 field_onlinestatusindicator_151;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_connection_card_147 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_connection_card_147 const * parent) -> slint::ComponentHandle<Component_onlinestatusindicator_151>;
    ~Component_onlinestatusindicator_151 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_onlinestatusindicator_151>;
};

class Component_rectangle_153 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_connection_card_147 const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_153 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_connection_card_147 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_connection_card_147 const * parent) -> slint::ComponentHandle<Component_rectangle_153>;
    ~Component_rectangle_153 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_153>;
};

class Component_rectangle_157 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_connection_card_147 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_157_empty_158_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_157_empty_158_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_157_empty_158_layoutinfo_v;
    IconButton_root_1 field_iconbutton_159;
    IconButton_root_1 field_iconbutton_160;
    IconButton_root_1 field_iconbutton_161;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_157 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_connection_card_147 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_connection_card_147 const * parent) -> slint::ComponentHandle<Component_rectangle_157>;
    ~Component_rectangle_157 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_157>;
};

class Component_rectangle_163 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_connection_card_147 const> parent;
    slint::cbindgen_private::Rectangle field_rectangle_163 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_connection_card_147 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_connection_card_147 const * parent) -> slint::ComponentHandle<Component_rectangle_163>;
    ~Component_rectangle_163 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_163>;
};

class Component_connection_card_147 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<RecentConnection> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_connection_card_147_x;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Rectangle field_connection_card_147 = {};
    slint::cbindgen_private::ImageItem field_image_148 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_149 = {};
    slint::cbindgen_private::ComplexText field_text_150 = {};
    slint::cbindgen_private::TouchArea field_card_touch_155 = {};
    slint::cbindgen_private::TouchArea field_image_touch_156 = {};
    slint::private_api::Conditional<class Component_onlinestatusindicator_151> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_153> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_157> repeater_2;
    slint::private_api::Conditional<class Component_rectangle_163> repeater_3;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_connection_card_147>;
    ~Component_connection_card_147 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const RecentConnection &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_connection_card_147>;
};

class Component_onlinestatusindicator_194 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    OnlineStatusIndicator_root_10 field_onlinestatusindicator_194;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_onlinestatusindicator_194>;
    ~Component_onlinestatusindicator_194 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_onlinestatusindicator_194>;
};

class Component_rectangle_196 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_196 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_196>;
    ~Component_rectangle_196 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_196>;
};

class Component_text_201 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::cbindgen_private::ComplexText field_text_201 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_text_201>;
    ~Component_text_201 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_201>;
};

class Component_toucharea_203 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::cbindgen_private::TouchArea field_toucharea_203 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_toucharea_203>;
    ~Component_toucharea_203 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_toucharea_203>;
};

class Component_text_213 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_205 const> parent;
    slint::cbindgen_private::ComplexText field_text_213 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_205 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_205 const * parent) -> slint::ComponentHandle<Component_text_213>;
    ~Component_text_213 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_213>;
};

class Component_rectangle_205 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_205_empty_207_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_205_empty_207_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_205_empty_207_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_205_menu_about_label_212_min_width;
    slint::private_api::Property<float> field_rectangle_205_menu_about_label_212_preferred_width;
    slint::private_api::Property<float> field_rectangle_205_menu_settings_label_209_min_width;
    slint::private_api::Property<float> field_rectangle_205_menu_settings_label_209_preferred_width;
    slint::private_api::Property<float> field_rectangle_205_width;
    slint::private_api::Property<float> field_rectangle_205_x;
    slint::private_api::Callback<void()> field_rectangle_205_menu_about_211_accessible_action_default;
    slint::private_api::Callback<void()> field_rectangle_205_menu_settings_208_accessible_action_default;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_205 = {};
    slint::cbindgen_private::TouchArea field_toucharea_206 = {};
    slint::cbindgen_private::BasicBorderRectangle field_menu_settings_208 = {};
    slint::cbindgen_private::SimpleText field_menu_settings_label_209 = {};
    slint::cbindgen_private::TouchArea field_settings_touch_210 = {};
    slint::cbindgen_private::BasicBorderRectangle field_menu_about_211 = {};
    slint::cbindgen_private::SimpleText field_menu_about_label_212 = {};
    slint::cbindgen_private::TouchArea field_about_touch_215 = {};
    slint::cbindgen_private::Rectangle field_rectangle_216 = {};
    slint::private_api::Conditional<class Component_text_213> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_205>;
    ~Component_rectangle_205 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_205>;
};

class Component_rectangle_218 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_218_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_218_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_218_text_219_min_height;
    slint::private_api::Property<float> field_rectangle_218_text_219_min_width;
    slint::private_api::Property<float> field_rectangle_218_text_219_preferred_height;
    slint::private_api::Property<float> field_rectangle_218_text_219_preferred_width;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_218 = {};
    slint::cbindgen_private::SimpleText field_text_219 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_218>;
    ~Component_rectangle_218 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_218>;
};

class Component_rectangle_221 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_221_empty_224_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_221_empty_224_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_221_empty_224_layoutinfo_v;
    DialogPromptText_root_12 field_dialogprompttext_225;
    PrimaryButton_root_39 field_primarybutton_226;
    slint::cbindgen_private::Rectangle field_rectangle_221 = {};
    slint::cbindgen_private::TouchArea field_toucharea_222 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_223 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_221>;
    ~Component_rectangle_221 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_221>;
};

class Component_rectangle_228 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_228_empty_231_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_228_empty_231_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_228_empty_231_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_228_empty_231_padding;
    slint::private_api::Property<float> field_rectangle_228_empty_231_spacing;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_228_empty_238_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_228_empty_238_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_228_empty_238_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_228_rectangle_233_height;
    DialogPromptText_root_12 field_dialogprompttext_232;
    LineEdit_root_28 field_lineedit_234;
    LineEditFocusUnderlineMask_root_37 field_lineeditfocusunderlinemask_235;
    PrimaryButton_root_39 field_primarybutton_239;
    SecondaryButton_root_42 field_secondarybutton_240;
    slint::cbindgen_private::Rectangle field_rectangle_228 = {};
    slint::cbindgen_private::TouchArea field_toucharea_229 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_230 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_233 = {};
    slint::cbindgen_private::Clip field__visibility_236 = {};
    slint::cbindgen_private::SimpleText field_text_237 = {};
    slint::cbindgen_private::Empty field_empty_238 = {};
    auto fn_empty_231_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_230_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_228>;
    ~Component_rectangle_228 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_228>;
};

class Component_rectangle_242 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_242_empty_245_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_242_empty_245_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_242_empty_245_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_242_empty_245_padding;
    slint::private_api::Property<float> field_rectangle_242_empty_245_spacing;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_242_empty_250_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_242_empty_250_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_242_empty_250_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_242_rectangle_247_height;
    DialogPromptText_root_12 field_dialogprompttext_246;
    LineEdit_root_28 field_lineedit_248;
    LineEditFocusUnderlineMask_root_37 field_lineeditfocusunderlinemask_249;
    PrimaryButton_root_39 field_primarybutton_251;
    SecondaryButton_root_42 field_secondarybutton_252;
    slint::cbindgen_private::Rectangle field_rectangle_242 = {};
    slint::cbindgen_private::TouchArea field_toucharea_243 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_244 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_247 = {};
    slint::cbindgen_private::Empty field_empty_250 = {};
    auto fn_empty_245_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_244_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_242>;
    ~Component_rectangle_242 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_242>;
};

class Component_rectangle_254 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_254_empty_257_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_254_empty_257_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_254_empty_257_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_254_empty_259_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_254_empty_259_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_254_empty_259_layoutinfo_v;
    DialogPromptText_root_12 field_dialogprompttext_258;
    PrimaryButton_root_39 field_primarybutton_260;
    SecondaryButton_root_42 field_secondarybutton_261;
    slint::cbindgen_private::Rectangle field_rectangle_254 = {};
    slint::cbindgen_private::TouchArea field_toucharea_255 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_256 = {};
    slint::cbindgen_private::Empty field_empty_259 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_254>;
    ~Component_rectangle_254 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_254>;
};

class Component_rectangle_263 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<int> field_rectangle_263_down_scroll_button_316_state;
    slint::private_api::Property<int> field_rectangle_263_down_scroll_button_329_state;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_height;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_max_height;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_max_width;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_min_height;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_min_width;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_preferred_height;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_preferred_width;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_vertical_stretch;
    slint::private_api::Property<float> field_rectangle_263_flickable_267_width;
    slint::private_api::Property<float> field_rectangle_263_horizontal_bar_320_maximum;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_263_horizontal_bar_320_policy;
    slint::private_api::Property<float> field_rectangle_263_horizontal_bar_320_size;
    slint::private_api::Property<int> field_rectangle_263_horizontal_bar_320_state;
    slint::private_api::Property<bool> field_rectangle_263_horizontal_bar_320_visible;
    slint::private_api::Property<float> field_rectangle_263_horizontal_bar_320_width;
    slint::private_api::Property<float> field_rectangle_263_rectangle_265_width;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_263_settings_content_269_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_263_settings_content_269_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_263_settings_content_269_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_263_settings_content_269_x;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_263_settings_scroll_266_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_rectangle_263_settings_scroll_266_width;
    slint::private_api::Property<float> field_rectangle_263_text_337_min_height;
    slint::private_api::Property<float> field_rectangle_263_text_337_min_width;
    slint::private_api::Property<float> field_rectangle_263_text_337_preferred_height;
    slint::private_api::Property<float> field_rectangle_263_text_337_preferred_width;
    slint::private_api::Property<float> field_rectangle_263_thumb_309_height;
    slint::private_api::Property<float> field_rectangle_263_thumb_309_width;
    slint::private_api::Property<float> field_rectangle_263_thumb_309_y;
    slint::private_api::Property<float> field_rectangle_263_thumb_322_height;
    slint::private_api::Property<float> field_rectangle_263_thumb_322_width;
    slint::private_api::Property<float> field_rectangle_263_thumb_322_x;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_263_touch_area_310_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_263_touch_area_323_saved_values;
    slint::private_api::Property<int> field_rectangle_263_up_scroll_button_312_state;
    slint::private_api::Property<int> field_rectangle_263_up_scroll_button_325_state;
    slint::private_api::Property<float> field_rectangle_263_vertical_bar_307_maximum;
    slint::private_api::Property<float> field_rectangle_263_vertical_bar_307_size;
    slint::private_api::Property<int> field_rectangle_263_vertical_bar_307_state;
    slint::private_api::Property<bool> field_rectangle_263_vertical_bar_307_visible;
    slint::private_api::Callback<void()> field_rectangle_263_horizontal_bar_320_scrolled;
    slint::private_api::Callback<void()> field_rectangle_263_vertical_bar_307_scrolled;
    CompactComboBox_root_56 field_compactcombobox_272;
    CompactComboBox_root_56 field_compactcombobox_275;
    CompactComboBox_root_56 field_compactcombobox_278;
    CompactComboBox_root_56 field_compactcombobox_281;
    ImGuiCheckBox_root_46 field_imguicheckbox_284;
    ImGuiCheckBox_root_46 field_imguicheckbox_287;
    ImGuiCheckBox_root_46 field_imguicheckbox_290;
    CompactButton_root_72 field_compactbutton_292;
    ImGuiCheckBox_root_46 field_imguicheckbox_293;
    ImGuiCheckBox_root_46 field_imguicheckbox_296;
    ImGuiCheckBox_root_46 field_imguicheckbox_299;
    ImGuiCheckBox_root_46 field_imguicheckbox_302;
    CompactButton_root_72 field_compactbutton_305;
    CompactButton_root_72 field_compactbutton_333;
    CompactButton_root_72 field_compactbutton_334;
    slint::cbindgen_private::Rectangle field_rectangle_263 = {};
    slint::cbindgen_private::TouchArea field_toucharea_264 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_265 = {};
    slint::cbindgen_private::Empty field_settings_scroll_266 = {};
    slint::cbindgen_private::Flickable field_flickable_267 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_268 = {};
    slint::cbindgen_private::Empty field_settings_content_269 = {};
    slint::cbindgen_private::Empty field_rectangle_270 = {};
    slint::cbindgen_private::ComplexText field_text_271 = {};
    slint::cbindgen_private::Empty field_rectangle_273 = {};
    slint::cbindgen_private::ComplexText field_text_274 = {};
    slint::cbindgen_private::Empty field_rectangle_276 = {};
    slint::cbindgen_private::ComplexText field_text_277 = {};
    slint::cbindgen_private::Empty field_rectangle_279 = {};
    slint::cbindgen_private::ComplexText field_text_280 = {};
    slint::cbindgen_private::Empty field_rectangle_282 = {};
    slint::cbindgen_private::ComplexText field_text_283 = {};
    slint::cbindgen_private::Empty field_rectangle_285 = {};
    slint::cbindgen_private::ComplexText field_text_286 = {};
    slint::cbindgen_private::Empty field_rectangle_288 = {};
    slint::cbindgen_private::ComplexText field_text_289 = {};
    slint::cbindgen_private::Empty field_rectangle_291 = {};
    slint::cbindgen_private::Empty field_rectangle_294 = {};
    slint::cbindgen_private::ComplexText field_text_295 = {};
    slint::cbindgen_private::Empty field_rectangle_297 = {};
    slint::cbindgen_private::ComplexText field_text_298 = {};
    slint::cbindgen_private::Empty field_rectangle_300 = {};
    slint::cbindgen_private::ComplexText field_text_301 = {};
    slint::cbindgen_private::Empty field_rectangle_303 = {};
    slint::cbindgen_private::ComplexText field_text_304 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_306 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_307 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_308 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_309 = {};
    slint::cbindgen_private::TouchArea field_touch_area_310 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_311 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_312 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_313 = {};
    slint::cbindgen_private::ImageItem field_icon_314 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_315 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_316 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_317 = {};
    slint::cbindgen_private::ImageItem field_icon_318 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_319 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_320 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_321 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_322 = {};
    slint::cbindgen_private::TouchArea field_touch_area_323 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_324 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_325 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_326 = {};
    slint::cbindgen_private::ImageItem field_icon_327 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_328 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_329 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_330 = {};
    slint::cbindgen_private::ImageItem field_icon_331 = {};
    slint::cbindgen_private::Rectangle field_rectangle_332 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_335 = {};
    slint::cbindgen_private::Rectangle field_rectangle_336 = {};
    slint::cbindgen_private::SimpleText field_text_337 = {};
    auto fn_horizontal_bar_320_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_settings_scroll_266_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_310_update_saved_values () const -> void;
    auto fn_touch_area_323_update_saved_values () const -> void;
    auto fn_vertical_bar_307_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_263>;
    ~Component_rectangle_263 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_263>;
};

class Component_text_343 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_339 const> parent;
    slint::cbindgen_private::SimpleText field_text_343 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_339 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_339 const * parent) -> slint::ComponentHandle<Component_text_343>;
    ~Component_text_343 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_343>;
};

class Component_rectangle_345 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_339 const> parent;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_345_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_345_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_345_version_link_346_min_height;
    slint::private_api::Property<float> field_rectangle_345_version_link_346_min_width;
    slint::private_api::Property<float> field_rectangle_345_version_link_346_preferred_height;
    slint::private_api::Property<float> field_rectangle_345_version_link_346_preferred_width;
    slint::cbindgen_private::Empty field_rectangle_345 = {};
    slint::cbindgen_private::SimpleText field_version_link_346 = {};
    slint::cbindgen_private::TouchArea field_version_touch_347 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_339 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_339 const * parent) -> slint::ComponentHandle<Component_rectangle_345>;
    ~Component_rectangle_345 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_345>;
};

class Component_rectangle_339 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_339_text_354_min_height;
    slint::private_api::Property<float> field_rectangle_339_text_354_min_width;
    slint::private_api::Property<float> field_rectangle_339_text_354_preferred_height;
    slint::private_api::Property<float> field_rectangle_339_text_354_preferred_width;
    CompactButton_root_72 field_compactbutton_351;
    slint::cbindgen_private::Rectangle field_rectangle_339 = {};
    slint::cbindgen_private::TouchArea field_toucharea_340 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_341 = {};
    slint::cbindgen_private::SimpleText field_text_342 = {};
    slint::cbindgen_private::SimpleText field_text_349 = {};
    slint::cbindgen_private::SimpleText field_text_350 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_352 = {};
    slint::cbindgen_private::Rectangle field_rectangle_353 = {};
    slint::cbindgen_private::SimpleText field_text_354 = {};
    slint::private_api::Conditional<class Component_text_343> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_345> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_339>;
    ~Component_rectangle_339 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_339>;
};

class Component_empty_370 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_356 const> parent;
    slint::private_api::Property<ReleaseNoteBlock> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_empty_370_height;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_370_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_370_layoutinfo_h;
    slint::private_api::Property<float> field_empty_370_padding_top;
    slint::private_api::Property<float> field_empty_370_y;
    slint::cbindgen_private::Empty field_empty_370 = {};
    slint::cbindgen_private::StyledTextItem field_styledtext_371 = {};
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_356 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_356 const * parent) -> slint::ComponentHandle<Component_empty_370>;
    ~Component_empty_370 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ReleaseNoteBlock &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_370>;
};

class Component_rectangle_356 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<int> field_rectangle_356_down_scroll_button_383_state;
    slint::private_api::Property<int> field_rectangle_356_down_scroll_button_396_state;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_356_empty_365_horizontal_scrollbar_policy;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_356_empty_365_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_rectangle_356_empty_365_visible_height;
    slint::private_api::Property<float> field_rectangle_356_empty_365_visible_width;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_356_empty_368_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_356_empty_368_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_356_empty_368_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_356_empty_368_padding_bottom;
    slint::private_api::Property<float> field_rectangle_356_empty_368_padding_top;
    slint::private_api::Property<float> field_rectangle_356_empty_368_spacing;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_356_empty_369_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_356_empty_369_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_356_empty_369_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_356_empty_369_spacing;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_max_height;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_max_width;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_min_height;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_min_width;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_preferred_height;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_preferred_width;
    slint::private_api::Property<float> field_rectangle_356_flickable_366_vertical_stretch;
    slint::private_api::Property<float> field_rectangle_356_horizontal_bar_387_maximum;
    slint::private_api::Property<float> field_rectangle_356_horizontal_bar_387_size;
    slint::private_api::Property<int> field_rectangle_356_horizontal_bar_387_state;
    slint::private_api::Property<bool> field_rectangle_356_horizontal_bar_387_visible;
    slint::private_api::Property<float> field_rectangle_356_thumb_376_height;
    slint::private_api::Property<float> field_rectangle_356_thumb_376_width;
    slint::private_api::Property<float> field_rectangle_356_thumb_376_y;
    slint::private_api::Property<float> field_rectangle_356_thumb_389_height;
    slint::private_api::Property<float> field_rectangle_356_thumb_389_width;
    slint::private_api::Property<float> field_rectangle_356_thumb_389_x;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_356_touch_area_377_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_356_touch_area_390_saved_values;
    slint::private_api::Property<int> field_rectangle_356_up_scroll_button_379_state;
    slint::private_api::Property<int> field_rectangle_356_up_scroll_button_392_state;
    slint::private_api::Property<float> field_rectangle_356_vertical_bar_374_maximum;
    slint::private_api::Property<float> field_rectangle_356_vertical_bar_374_size;
    slint::private_api::Property<int> field_rectangle_356_vertical_bar_374_state;
    slint::private_api::Property<bool> field_rectangle_356_vertical_bar_374_visible;
    slint::private_api::Callback<void()> field_rectangle_356_horizontal_bar_387_scrolled;
    slint::private_api::Callback<void()> field_rectangle_356_vertical_bar_374_scrolled;
    CompactButton_root_72 field_compactbutton_399;
    CompactButton_root_72 field_compactbutton_400;
    slint::cbindgen_private::Rectangle field_rectangle_356 = {};
    slint::cbindgen_private::TouchArea field_toucharea_357 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_358 = {};
    slint::cbindgen_private::SimpleText field_text_359 = {};
    slint::cbindgen_private::Empty field_rectangle_360 = {};
    slint::cbindgen_private::SimpleText field_text_361 = {};
    slint::cbindgen_private::TouchArea field_website_touch_362 = {};
    slint::cbindgen_private::SimpleText field_text_363 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_364 = {};
    slint::cbindgen_private::Empty field_empty_365 = {};
    slint::cbindgen_private::Flickable field_flickable_366 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_367 = {};
    slint::cbindgen_private::Empty field_empty_368 = {};
    slint::cbindgen_private::Empty field_empty_369 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_373 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_374 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_375 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_376 = {};
    slint::cbindgen_private::TouchArea field_touch_area_377 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_378 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_379 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_380 = {};
    slint::cbindgen_private::ImageItem field_icon_381 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_382 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_383 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_384 = {};
    slint::cbindgen_private::ImageItem field_icon_385 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_386 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_387 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_388 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_389 = {};
    slint::cbindgen_private::TouchArea field_touch_area_390 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_391 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_392 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_393 = {};
    slint::cbindgen_private::ImageItem field_icon_394 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_395 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_396 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_397 = {};
    slint::cbindgen_private::ImageItem field_icon_398 = {};
    slint::private_api::Repeater<class Component_empty_370, ReleaseNoteBlock> repeater_0;
    auto fn_empty_365_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_368_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_369_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_horizontal_bar_387_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_377_update_saved_values () const -> void;
    auto fn_touch_area_390_update_saved_values () const -> void;
    auto fn_vertical_bar_374_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_356>;
    ~Component_rectangle_356 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_356>;
};

class Component_rectangle_407 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_405 const> parent;
    slint::private_api::Property<std::int64_t> field_rectangle_407_optimized__408_interval;
    slint::private_api::Property<bool> field_rectangle_407_optimized__408_running;
    slint::private_api::Callback<void(slint::SharedString)> field_rectangle_407_connection_password_editor_409_accessible_action_set_value;
    slint::private_api::Callback<void()> field_rectangle_407_optimized__408_triggered;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_407 = {};
    slint::cbindgen_private::TextInput field_connection_password_editor_409 = {};
    slint::Timer timer0;
    auto update_timers () -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_405 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_405 const * parent) -> slint::ComponentHandle<Component_rectangle_407>;
    ~Component_rectangle_407 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_407>;
};

class Component_rectangle_411 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_405 const> parent;
    ImGuiCheckBox_root_46 field_imguicheckbox_412;
    slint::cbindgen_private::Empty field_rectangle_411 = {};
    slint::cbindgen_private::SimpleText field_text_413 = {};
    slint::cbindgen_private::TouchArea field_toucharea_414 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_405 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_405 const * parent) -> slint::ComponentHandle<Component_rectangle_411>;
    ~Component_rectangle_411 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_411>;
};

class Component_connectiondialogbutton_416 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_405 const> parent;
    ConnectionDialogButton_root_50 field_connectiondialogbutton_416;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_405 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_405 const * parent) -> slint::ComponentHandle<Component_connectiondialogbutton_416>;
    ~Component_connectiondialogbutton_416 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_connectiondialogbutton_416>;
};

class Component_connectiondialogbutton_418 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_405 const> parent;
    ConnectionDialogButton_root_50 field_connectiondialogbutton_418;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_405 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_405 const * parent) -> slint::ComponentHandle<Component_connectiondialogbutton_418>;
    ~Component_connectiondialogbutton_418 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_connectiondialogbutton_418>;
};

class Component_rectangle_405 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_402 const> parent;
    slint::private_api::Property<float> field_rectangle_405_text_406_min_width;
    slint::private_api::Property<float> field_rectangle_405_text_406_preferred_width;
    slint::private_api::Property<float> field_rectangle_405_text_406_x;
    slint::cbindgen_private::Empty field_rectangle_405 = {};
    slint::cbindgen_private::SimpleText field_text_406 = {};
    slint::private_api::Conditional<class Component_rectangle_407> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_411> repeater_1;
    slint::private_api::Conditional<class Component_connectiondialogbutton_416> repeater_2;
    slint::private_api::Conditional<class Component_connectiondialogbutton_418> repeater_3;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_402 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_402 const * parent) -> slint::ComponentHandle<Component_rectangle_405>;
    ~Component_rectangle_405 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_405>;
};

class Component_secondarybutton_424 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_421 const> parent;
    SecondaryButton_root_42 field_secondarybutton_424;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_421 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_421 const * parent) -> slint::ComponentHandle<Component_secondarybutton_424>;
    ~Component_secondarybutton_424 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_secondarybutton_424>;
};

class Component_primarybutton_426 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_421 const> parent;
    PrimaryButton_root_39 field_primarybutton_426;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_421 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_421 const * parent) -> slint::ComponentHandle<Component_primarybutton_426>;
    ~Component_primarybutton_426 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_primarybutton_426>;
};

class Component_empty_421 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_402 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_421_empty_423_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_421_empty_423_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_421_empty_423_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_421_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_421_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_421_layoutinfo_v;
    DialogPromptText_root_12 field_dialogprompttext_422;
    slint::cbindgen_private::Empty field_empty_421 = {};
    slint::cbindgen_private::Empty field_empty_423 = {};
    slint::private_api::Conditional<class Component_secondarybutton_424> repeater_0;
    slint::private_api::Conditional<class Component_primarybutton_426> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_402 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_402 const * parent) -> slint::ComponentHandle<Component_empty_421>;
    ~Component_empty_421 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_421>;
};

class Component_rectangle_402 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_402_rectangle_404_width;
    slint::cbindgen_private::Rectangle field_rectangle_402 = {};
    slint::cbindgen_private::TouchArea field_toucharea_403 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_404 = {};
    slint::private_api::Conditional<class Component_rectangle_405> repeater_0;
    slint::private_api::Conditional<class Component_empty_421> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_402>;
    ~Component_rectangle_402 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_402>;
};

class Component_rectangle_430 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_430_text_449_min_height;
    slint::private_api::Property<float> field_rectangle_430_text_449_min_width;
    slint::private_api::Property<float> field_rectangle_430_text_449_preferred_height;
    slint::private_api::Property<float> field_rectangle_430_text_449_preferred_width;
    LineEdit_root_28 field_lineedit_435;
    LineEditFocusUnderlineMask_root_37 field_lineeditfocusunderlinemask_436;
    LineEdit_root_28 field_lineedit_439;
    LineEditFocusUnderlineMask_root_37 field_lineeditfocusunderlinemask_440;
    LineEdit_root_28 field_lineedit_443;
    LineEditFocusUnderlineMask_root_37 field_lineeditfocusunderlinemask_444;
    CompactButton_root_72 field_compactbutton_445;
    CompactButton_root_72 field_compactbutton_446;
    slint::cbindgen_private::Rectangle field_rectangle_430 = {};
    slint::cbindgen_private::TouchArea field_toucharea_431 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_432 = {};
    slint::cbindgen_private::ComplexText field_text_433 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_434 = {};
    slint::cbindgen_private::ComplexText field_text_437 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_438 = {};
    slint::cbindgen_private::ComplexText field_text_441 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_442 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_447 = {};
    slint::cbindgen_private::Rectangle field_rectangle_448 = {};
    slint::cbindgen_private::SimpleText field_text_449 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_430>;
    ~Component_rectangle_430 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_430>;
};

class Component_text_454 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_451 const> parent;
    slint::cbindgen_private::ComplexText field_text_454 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_451 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_451 const * parent) -> slint::ComponentHandle<Component_text_454>;
    ~Component_text_454 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_454>;
};

class Component_rectangle_451 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_451_empty_452_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_451_empty_452_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_451_empty_452_layoutinfo_v;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_451 = {};
    slint::cbindgen_private::ComplexText field_text_453 = {};
    slint::cbindgen_private::ComplexText field_text_456 = {};
    slint::cbindgen_private::SimpleText field_text_457 = {};
    slint::private_api::Conditional<class Component_text_454> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_451>;
    ~Component_rectangle_451 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_451>;
};

class Component_rectangle_459 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_459_text_469_min_height;
    slint::private_api::Property<float> field_rectangle_459_text_469_min_width;
    slint::private_api::Property<float> field_rectangle_459_text_469_preferred_height;
    slint::private_api::Property<float> field_rectangle_459_text_469_preferred_width;
    MiniToggleSwitch_root_53 field_minitoggleswitch_464;
    MiniToggleSwitch_root_53 field_minitoggleswitch_466;
    slint::cbindgen_private::Rectangle field_rectangle_459 = {};
    slint::cbindgen_private::TouchArea field_toucharea_460 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_461 = {};
    slint::cbindgen_private::ComplexText field_text_462 = {};
    slint::cbindgen_private::ComplexText field_text_463 = {};
    slint::cbindgen_private::ComplexText field_text_465 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_467 = {};
    slint::cbindgen_private::Rectangle field_rectangle_468 = {};
    slint::cbindgen_private::SimpleText field_text_469 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_459>;
    ~Component_rectangle_459 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_459>;
};

class Component_text_478 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_471 const> parent;
    slint::cbindgen_private::ComplexText field_text_478 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_471 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_471 const * parent) -> slint::ComponentHandle<Component_text_478>;
    ~Component_text_478 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_478>;
};

class Component_empty_480 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_471 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_480_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_480_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_480_layoutinfo_v;
    ToggleSwitch_root_75 field_toggleswitch_482;
    slint::cbindgen_private::Empty field_empty_480 = {};
    slint::cbindgen_private::SimpleText field_text_481 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_471 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_471 const * parent) -> slint::ComponentHandle<Component_empty_480>;
    ~Component_empty_480 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_480>;
};

class Component_primarybutton_485 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_471 const> parent;
    PrimaryButton_root_39 field_primarybutton_485;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_471 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_471 const * parent) -> slint::ComponentHandle<Component_primarybutton_485>;
    ~Component_primarybutton_485 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_primarybutton_485>;
};

class Component_primarybutton_487 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_471 const> parent;
    PrimaryButton_root_39 field_primarybutton_487;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_471 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_471 const * parent) -> slint::ComponentHandle<Component_primarybutton_487>;
    ~Component_primarybutton_487 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_primarybutton_487>;
};

class Component_secondarybutton_489 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_471 const> parent;
    SecondaryButton_root_42 field_secondarybutton_489;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_471 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_471 const * parent) -> slint::ComponentHandle<Component_secondarybutton_489>;
    ~Component_secondarybutton_489 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_secondarybutton_489>;
};

class Component_rectangle_471 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_471_empty_474_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_471_empty_474_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_471_empty_474_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_471_empty_474_padding;
    slint::private_api::Property<float> field_rectangle_471_empty_474_spacing;
    slint::private_api::Property<float> field_rectangle_471_empty_484_height;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_471_empty_484_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_471_empty_484_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_471_empty_484_layoutinfo_v;
    DialogPromptText_root_12 field_dialogprompttext_475;
    slint::cbindgen_private::Rectangle field_rectangle_471 = {};
    slint::cbindgen_private::TouchArea field_toucharea_472 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_473 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_476 = {};
    slint::cbindgen_private::ComplexText field_text_477 = {};
    slint::cbindgen_private::Empty field_empty_484 = {};
    slint::private_api::Conditional<class Component_text_478> repeater_0;
    slint::private_api::Conditional<class Component_empty_480> repeater_1;
    slint::private_api::Conditional<class Component_primarybutton_485> repeater_2;
    slint::private_api::Conditional<class Component_primarybutton_487> repeater_3;
    slint::private_api::Conditional<class Component_secondarybutton_489> repeater_4;
    auto fn_empty_474_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_473_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_471>;
    ~Component_rectangle_471 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_471>;
};

class Component_rectangle_492 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_492_empty_495_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_492_empty_495_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_492_empty_495_layoutinfo_v;
    DialogPromptText_root_12 field_dialogprompttext_496;
    DialogPromptText_root_12 field_dialogprompttext_497;
    PrimaryButton_root_39 field_primarybutton_498;
    slint::cbindgen_private::Rectangle field_rectangle_492 = {};
    slint::cbindgen_private::TouchArea field_toucharea_493 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_494 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_492>;
    ~Component_rectangle_492 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_492>;
};

class Component_rectangle_500 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_500_path_507_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_500_path_507_max_height;
    slint::private_api::Property<float> field_rectangle_500_path_507_max_width;
    slint::private_api::Property<float> field_rectangle_500_path_507_min_height;
    slint::private_api::Property<float> field_rectangle_500_path_507_min_width;
    slint::private_api::Property<float> field_rectangle_500_path_507_preferred_height;
    slint::private_api::Property<float> field_rectangle_500_path_507_preferred_width;
    slint::private_api::Property<float> field_rectangle_500_path_507_vertical_stretch;
    slint::private_api::Property<int> field_rectangle_500_wayland_title_drag_502_phase;
    slint::private_api::Property<float> field_rectangle_500_wayland_title_drag_502_x;
    slint::private_api::Callback<void()> field_rectangle_500_wayland_close_button_506_accessible_action_default;
    slint::private_api::Callback<void()> field_rectangle_500_wayland_minimize_button_503_accessible_action_default;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Rectangle field_rectangle_500 = {};
    slint::cbindgen_private::ComplexText field_text_501 = {};
    slint::cbindgen_private::TouchArea field_wayland_title_drag_502 = {};
    slint::cbindgen_private::BasicBorderRectangle field_wayland_minimize_button_503 = {};
    slint::cbindgen_private::Rectangle field_rectangle_504 = {};
    slint::cbindgen_private::TouchArea field_wayland_minimize_touch_505 = {};
    slint::cbindgen_private::BasicBorderRectangle field_wayland_close_button_506 = {};
    slint::cbindgen_private::Path field_path_507 = {};
    slint::cbindgen_private::TouchArea field_wayland_close_touch_508 = {};
    slint::cbindgen_private::Rectangle field_rectangle_509 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_500>;
    ~Component_rectangle_500 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_500>;
};

class Component_rectangle_511 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<float> field_rectangle_511_text_516_min_height;
    slint::private_api::Property<float> field_rectangle_511_text_516_min_width;
    slint::private_api::Property<float> field_rectangle_511_text_516_preferred_height;
    slint::private_api::Property<float> field_rectangle_511_text_516_preferred_width;
    slint::private_api::Property<float> field_rectangle_511_text_519_min_height;
    slint::private_api::Property<float> field_rectangle_511_text_519_min_width;
    slint::private_api::Property<float> field_rectangle_511_text_519_preferred_height;
    slint::private_api::Property<float> field_rectangle_511_text_519_preferred_width;
    slint::private_api::Property<int> field_rectangle_511_title_drag_514_phase;
    slint::private_api::Callback<void()> field_rectangle_511_close_button_518_accessible_action_default;
    slint::private_api::Callback<void()> field_rectangle_511_minimize_button_515_accessible_action_default;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Rectangle field_rectangle_511 = {};
    slint::cbindgen_private::ImageItem field_image_512 = {};
    slint::cbindgen_private::ComplexText field_text_513 = {};
    slint::cbindgen_private::TouchArea field_title_drag_514 = {};
    slint::cbindgen_private::Rectangle field_minimize_button_515 = {};
    slint::cbindgen_private::ComplexText field_text_516 = {};
    slint::cbindgen_private::TouchArea field_minimize_touch_517 = {};
    slint::cbindgen_private::Rectangle field_close_button_518 = {};
    slint::cbindgen_private::ComplexText field_text_519 = {};
    slint::cbindgen_private::TouchArea field_close_touch_520 = {};
    slint::cbindgen_private::Rectangle field_rectangle_521 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_511>;
    ~Component_rectangle_511 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_511>;
};

class Component_rectangle_523 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_523 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component_rectangle_523>;
    ~Component_rectangle_523 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_523>;
};

class MainWindow {
    SharedGlobals m_globals;
    public:
    template<typename T> auto global () const -> const T&;
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_108_about_open;
    slint::private_api::Property<bool> field_root_108_accessibility_granted;
    slint::private_api::Property<slint::SharedString> field_root_108_alias_input;
    slint::private_api::Property<bool> field_root_108_alias_open;
    slint::private_api::Property<slint::SharedString> field_root_108_alias_remote_id;
    slint::private_api::Property<bool> field_root_108_autostart_enabled;
    slint::private_api::Property<int> field_root_108_codec_index;
    slint::private_api::Property<bool> field_root_108_connection_dialog_open;
    slint::private_api::Property<slint::SharedString> field_root_108_connection_password;
    slint::private_api::Property<bool> field_root_108_connection_password_required;
    slint::private_api::Property<bool> field_root_108_connection_pending;
    slint::private_api::Property<bool> field_root_108_connection_remember_password;
    slint::private_api::Property<slint::SharedString> field_root_108_connection_status_text;
    slint::private_api::Property<bool> field_root_108_connection_validating;
    slint::private_api::Property<float> field_root_108_content_layer_113_height;
    slint::private_api::Property<float> field_root_108_content_layer_113_width;
    slint::private_api::Property<bool> field_root_108_copy_toast;
    slint::private_api::Property<slint::SharedString> field_root_108_coturn_port;
    slint::private_api::Property<slint::SharedString> field_root_108_current_version;
    slint::private_api::Property<bool> field_root_108_custom_titlebar;
    slint::private_api::Property<bool> field_root_108_daemon_enabled;
    slint::private_api::Property<bool> field_root_108_delete_open;
    slint::private_api::Property<slint::SharedString> field_root_108_delete_remote_id;
    slint::private_api::Property<int> field_root_108_down_scroll_button_176_state;
    slint::private_api::Property<int> field_root_108_down_scroll_button_189_state;
    slint::private_api::Property<slint::SharedVector<float>> field_root_108_empty_146_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_108_empty_146_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_108_empty_146_layoutinfo_v;
    slint::private_api::Property<float> field_root_108_empty_146_padding_bottom;
    slint::private_api::Property<float> field_root_108_empty_146_padding_top;
    slint::private_api::Property<slint::SharedString> field_root_108_file_save_path;
    slint::private_api::Property<float> field_root_108_flickable_144_height;
    slint::private_api::Property<float> field_root_108_flickable_144_horizontal_stretch;
    slint::private_api::Property<float> field_root_108_flickable_144_max_height;
    slint::private_api::Property<float> field_root_108_flickable_144_max_width;
    slint::private_api::Property<float> field_root_108_flickable_144_min_height;
    slint::private_api::Property<float> field_root_108_flickable_144_min_width;
    slint::private_api::Property<float> field_root_108_flickable_144_preferred_height;
    slint::private_api::Property<float> field_root_108_flickable_144_preferred_width;
    slint::private_api::Property<float> field_root_108_flickable_144_vertical_stretch;
    slint::private_api::Property<float> field_root_108_flickable_144_width;
    slint::private_api::Property<int> field_root_108_frame_rate_index;
    slint::private_api::Property<bool> field_root_108_hardware_codec_available;
    slint::private_api::Property<bool> field_root_108_hardware_codec_enabled;
    slint::private_api::Property<float> field_root_108_horizontal_bar_180_maximum;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_108_horizontal_bar_180_policy;
    slint::private_api::Property<float> field_root_108_horizontal_bar_180_size;
    slint::private_api::Property<int> field_root_108_horizontal_bar_180_state;
    slint::private_api::Property<bool> field_root_108_horizontal_bar_180_visible;
    slint::private_api::Property<float> field_root_108_horizontal_bar_180_width;
    slint::private_api::Property<int> field_root_108_language_index;
    slint::private_api::Property<slint::SharedString> field_root_108_latest_version;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_108_layoutinfo_h;
    slint::private_api::Property<slint::SharedString> field_root_108_local_id;
    slint::private_api::Property<slint::SharedString> field_root_108_local_password;
    slint::private_api::Property<bool> field_root_108_menu_open;
    slint::private_api::Property<bool> field_root_108_minimize_to_tray_enabled;
    slint::private_api::Property<slint::SharedString> field_root_108_new_password_input;
    slint::private_api::Property<slint::SharedString> field_root_108_offline_warning;
    slint::private_api::Property<std::int64_t> field_root_108_optimized_copy_timer_109_interval;
    slint::private_api::Property<bool> field_root_108_optimized_copy_timer_109_running;
    slint::private_api::Property<std::int64_t> field_root_108_optimized_remote_id_format_timer_110_interval;
    slint::private_api::Property<bool> field_root_108_optimized_remote_id_format_timer_110_running;
    slint::private_api::Property<bool> field_root_108_password_visible;
    slint::private_api::Property<bool> field_root_108_permission_dialog_open;
    slint::private_api::Property<bool> field_root_108_portable_service_dialog_open;
    slint::private_api::Property<bool> field_root_108_portable_service_do_not_remind;
    slint::private_api::Property<bool> field_root_108_portable_service_installed;
    slint::private_api::Property<bool> field_root_108_portable_service_installing;
    slint::private_api::Property<bool> field_root_108_portable_service_settings_visible;
    slint::private_api::Property<slint::SharedString> field_root_108_portable_service_status;
    slint::private_api::Property<bool> field_root_108_portable_service_succeeded;
    slint::private_api::Property<bool> field_root_108_portable_service_suppressed_notice_open;
    slint::private_api::Property<std::shared_ptr<slint::Model<RecentConnection>>> field_root_108_recent_connections;
    slint::private_api::Property<float> field_root_108_recent_list_141_width;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_108_recent_scroll_143_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_108_recent_scroll_143_layoutinfo_v;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_108_recent_scroll_143_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_root_108_recent_tooltip_height;
    slint::private_api::Property<slint::SharedString> field_root_108_recent_tooltip_host;
    slint::private_api::Property<slint::SharedString> field_root_108_recent_tooltip_id;
    slint::private_api::Property<slint::SharedString> field_root_108_recent_tooltip_name;
    slint::private_api::Property<bool> field_root_108_recent_tooltip_online;
    slint::private_api::Property<float> field_root_108_recent_tooltip_pointer_x;
    slint::private_api::Property<float> field_root_108_recent_tooltip_pointer_y;
    slint::private_api::Property<bool> field_root_108_recent_tooltip_visible;
    slint::private_api::Property<float> field_root_108_recent_tooltip_x;
    slint::private_api::Property<float> field_root_108_recent_tooltip_y;
    slint::private_api::Property<float> field_root_108_rectangle_115_width;
    slint::private_api::Property<slint::SharedString> field_root_108_release_date;
    slint::private_api::Property<slint::SharedString> field_root_108_release_name;
    slint::private_api::Property<std::shared_ptr<slint::Model<ReleaseNoteBlock>>> field_root_108_release_note_blocks;
    slint::private_api::Property<bool> field_root_108_reset_password_invalid;
    slint::private_api::Property<bool> field_root_108_reset_password_open;
    slint::private_api::Property<bool> field_root_108_screen_recording_granted;
    slint::private_api::Property<float> field_root_108_sectiontitle_140_min_width;
    slint::private_api::Property<float> field_root_108_sectiontitle_140_preferred_width;
    slint::private_api::Property<bool> field_root_108_self_host_settings_open;
    slint::private_api::Property<bool> field_root_108_self_hosted_enabled;
    slint::private_api::Property<slint::SharedString> field_root_108_server_host;
    slint::private_api::Property<slint::SharedString> field_root_108_server_port;
    slint::private_api::Property<bool> field_root_108_settings_open;
    slint::private_api::Property<float> field_root_108_settings_scroll_y;
    slint::private_api::Property<bool> field_root_108_settings_session_active;
    slint::private_api::Property<bool> field_root_108_signal_connected;
    slint::private_api::Property<bool> field_root_108_signal_tls_error;
    slint::private_api::Property<bool> field_root_108_srtp_enabled;
    slint::private_api::Property<float> field_root_108_text_198_min_width;
    slint::private_api::Property<float> field_root_108_text_198_preferred_width;
    slint::private_api::Property<float> field_root_108_thumb_169_height;
    slint::private_api::Property<float> field_root_108_thumb_169_width;
    slint::private_api::Property<float> field_root_108_thumb_169_y;
    slint::private_api::Property<float> field_root_108_thumb_182_height;
    slint::private_api::Property<float> field_root_108_thumb_182_width;
    slint::private_api::Property<float> field_root_108_thumb_182_x;
    slint::private_api::Property<float> field_root_108_titlebar_height;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_108_touch_area_170_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_108_touch_area_183_saved_values;
    slint::private_api::Property<bool> field_root_108_turn_enabled;
    slint::private_api::Property<int> field_root_108_up_scroll_button_172_state;
    slint::private_api::Property<int> field_root_108_up_scroll_button_185_state;
    slint::private_api::Property<bool> field_root_108_update_available;
    slint::private_api::Property<bool> field_root_108_update_icon_blink_on;
    slint::private_api::Property<bool> field_root_108_update_open;
    slint::private_api::Property<float> field_root_108_vertical_bar_167_maximum;
    slint::private_api::Property<float> field_root_108_vertical_bar_167_size;
    slint::private_api::Property<int> field_root_108_vertical_bar_167_state;
    slint::private_api::Property<bool> field_root_108_vertical_bar_167_visible;
    slint::private_api::Property<int> field_root_108_video_quality_index;
    slint::private_api::Property<bool> field_root_108_wayland_titlebar;
    slint::private_api::Property<bool> field_root_108_window_active;
    slint::private_api::Property<float> field_root_108_window_surface_111_width;
    slint::private_api::Callback<void()> field_root_108_acknowledge_portable_service;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_acknowledge_portable_service;
    slint::private_api::Callback<void()> field_root_108_acknowledge_portable_service_suppressed;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_acknowledge_portable_service_suppressed;
    slint::private_api::Callback<void()> field_root_108_browse_save_path;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_browse_save_path;
    slint::private_api::Callback<void()> field_root_108_cancel_portable_service;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_cancel_portable_service;
    slint::private_api::Callback<void()> field_root_108_cancel_self_hosted_settings;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_cancel_self_hosted_settings;
    slint::private_api::Callback<void()> field_root_108_cancel_settings;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_cancel_settings;
    slint::private_api::Callback<void()> field_root_108_close_main_window;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_close_main_window;
    slint::private_api::Callback<void(slint::SharedString)> field_root_108_connect_requested;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_connect_requested;
    slint::private_api::Callback<void()> field_root_108_connection_acknowledge;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_connection_acknowledge;
    slint::private_api::Callback<void()> field_root_108_connection_cancel;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_connection_cancel;
    slint::private_api::Callback<void(slint::SharedString, bool)> field_root_108_connection_submit_password;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_connection_submit_password;
    slint::private_api::Callback<void()> field_root_108_copy_local_id;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_copy_local_id;
    slint::private_api::Callback<slint::SharedString(slint::SharedString)> field_root_108_format_remote_id;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_format_remote_id;
    slint::private_api::Callback<void()> field_root_108_horizontal_bar_180_scrolled;
    slint::private_api::Callback<void()> field_root_108_install_portable_service;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_install_portable_service;
    slint::private_api::Callback<void(int, float, float)> field_root_108_main_title_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_main_title_drag;
    slint::private_api::Callback<void()> field_root_108_minimize_main_window;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_minimize_main_window;
    slint::private_api::Callback<void()> field_root_108_open_download;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_open_download;
    slint::private_api::Callback<void()> field_root_108_optimized_copy_timer_109_triggered;
    slint::private_api::Callback<void()> field_root_108_optimized_remote_id_format_timer_110_triggered;
    slint::private_api::Callback<void(slint::SharedString)> field_root_108_recent_connect;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_recent_connect;
    slint::private_api::Callback<void(slint::SharedString)> field_root_108_recent_delete;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_recent_delete;
    slint::private_api::Callback<void(slint::SharedString, slint::SharedString)> field_root_108_recent_edit_alias;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_recent_edit_alias;
    slint::private_api::Callback<void(slint::SharedString)> field_root_108_remote_id_editor_136_accessible_action_set_value;
    slint::private_api::Callback<void()> field_root_108_request_accessibility_permission;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_request_accessibility_permission;
    slint::private_api::Callback<void()> field_root_108_request_screen_recording_permission;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_request_screen_recording_permission;
    slint::private_api::Callback<bool(slint::SharedString)> field_root_108_reset_password;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_reset_password;
    slint::private_api::Callback<void()> field_root_108_reset_remote_id;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_reset_remote_id;
    slint::private_api::Callback<void()> field_root_108_save_self_hosted_settings;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_save_self_hosted_settings;
    slint::private_api::Callback<void()> field_root_108_save_settings;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_save_settings;
    slint::private_api::Callback<void()> field_root_108_toggle_password_visibility;
    slint::private_api::Property<uint8_t> callback_tracker_root_108_toggle_password_visibility;
    slint::private_api::Callback<void()> field_root_108_vertical_bar_167_scrolled;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::private_api::ChangeTracker change_tracker2;
    slint::private_api::ChangeTracker change_tracker3;
    slint::private_api::ChangeTracker change_tracker4;
    SectionTitle_root_9 field_sectiontitle_119;
    IconButton_root_1 field_iconbutton_124;
    IconButton_root_1 field_iconbutton_129;
    IconButton_root_1 field_iconbutton_130;
    SectionTitle_root_9 field_sectiontitle_132;
    IconButton_root_1 field_iconbutton_137;
    SectionTitle_root_9 field_sectiontitle_140;
    IconButton_root_1 field_menu_button_200;
    slint::cbindgen_private::WindowItem field_root_108 = {};
    slint::cbindgen_private::BasicBorderRectangle field_window_surface_111 = {};
    slint::cbindgen_private::Clip field_window_surface_clip_112 = {};
    slint::cbindgen_private::Empty field_content_layer_113 = {};
    slint::cbindgen_private::Clip field_content_layer_clip_114 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_115 = {};
    slint::cbindgen_private::FocusScope field_focus_sink_116 = {};
    slint::cbindgen_private::TouchArea field_toucharea_117 = {};
    slint::cbindgen_private::Rectangle field_rectangle_118 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_120 = {};
    slint::cbindgen_private::SimpleText field_text_121 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_122 = {};
    slint::cbindgen_private::ComplexText field_text_123 = {};
    slint::cbindgen_private::Rectangle field_rectangle_125 = {};
    slint::cbindgen_private::SimpleText field_text_126 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_127 = {};
    slint::cbindgen_private::ComplexText field_text_128 = {};
    slint::cbindgen_private::Rectangle field_rectangle_131 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_133 = {};
    slint::cbindgen_private::SimpleText field_text_134 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_135 = {};
    slint::cbindgen_private::TextInput field_remote_id_editor_136 = {};
    slint::cbindgen_private::BasicBorderRectangle field_recent_panel_138 = {};
    slint::cbindgen_private::Rectangle field_rectangle_139 = {};
    slint::cbindgen_private::BasicBorderRectangle field_recent_list_141 = {};
    slint::cbindgen_private::Clip field_recent_list_clip_142 = {};
    slint::cbindgen_private::Flickable field_flickable_144 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_145 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_166 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_167 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_168 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_169 = {};
    slint::cbindgen_private::TouchArea field_touch_area_170 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_171 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_172 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_173 = {};
    slint::cbindgen_private::ImageItem field_icon_174 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_175 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_176 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_177 = {};
    slint::cbindgen_private::ImageItem field_icon_178 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_179 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_180 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_181 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_182 = {};
    slint::cbindgen_private::TouchArea field_touch_area_183 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_184 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_185 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_186 = {};
    slint::cbindgen_private::ImageItem field_icon_187 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_188 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_189 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_190 = {};
    slint::cbindgen_private::ImageItem field_icon_191 = {};
    slint::cbindgen_private::Rectangle field_rectangle_192 = {};
    slint::cbindgen_private::Rectangle field_rectangle_193 = {};
    slint::cbindgen_private::SimpleText field_text_198 = {};
    slint::cbindgen_private::Rectangle field_rectangle_199 = {};
    slint::private_api::Repeater<class Component_connection_card_147, RecentConnection> repeater_0;
    slint::private_api::Conditional<class Component_onlinestatusindicator_194> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_196> repeater_2;
    slint::private_api::Conditional<class Component_text_201> repeater_3;
    slint::private_api::Conditional<class Component_toucharea_203> repeater_4;
    slint::private_api::Conditional<class Component_rectangle_205> repeater_5;
    slint::private_api::Conditional<class Component_rectangle_218> repeater_6;
    slint::private_api::Conditional<class Component_rectangle_221> repeater_7;
    slint::private_api::Conditional<class Component_rectangle_228> repeater_8;
    slint::private_api::Conditional<class Component_rectangle_242> repeater_9;
    slint::private_api::Conditional<class Component_rectangle_254> repeater_10;
    slint::private_api::Conditional<class Component_rectangle_263> repeater_11;
    slint::private_api::Conditional<class Component_rectangle_339> repeater_12;
    slint::private_api::Conditional<class Component_rectangle_356> repeater_13;
    slint::private_api::Conditional<class Component_rectangle_402> repeater_14;
    slint::private_api::Conditional<class Component_rectangle_430> repeater_15;
    slint::private_api::Conditional<class Component_rectangle_451> repeater_16;
    slint::private_api::Conditional<class Component_rectangle_459> repeater_17;
    slint::private_api::Conditional<class Component_rectangle_471> repeater_18;
    slint::private_api::Conditional<class Component_rectangle_492> repeater_19;
    slint::private_api::Conditional<class Component_rectangle_500> repeater_20;
    slint::private_api::Conditional<class Component_rectangle_511> repeater_21;
    slint::private_api::Conditional<class Component_rectangle_523> repeater_22;
    slint::Timer timer0;
    slint::Timer timer1;
    auto update_timers () -> void;
    public:
    auto fn_content_layer_113_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_146_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_horizontal_bar_180_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_recent_list_141_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_recent_scroll_143_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_170_update_saved_values () const -> void;
    auto fn_touch_area_183_update_saved_values () const -> void;
    auto fn_vertical_bar_167_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    private:
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<MainWindow>;
    ~MainWindow ();
    auto get_about_open () const -> bool;
    auto set_about_open (const bool &value) const -> void;
    auto get_accessibility_granted () const -> bool;
    auto set_accessibility_granted (const bool &value) const -> void;
    auto invoke_acknowledge_portable_service () const -> void;
    template<std::invocable<> Functor> auto on_acknowledge_portable_service (Functor && callback_handler) const;
    auto invoke_acknowledge_portable_service_suppressed () const -> void;
    template<std::invocable<> Functor> auto on_acknowledge_portable_service_suppressed (Functor && callback_handler) const;
    auto get_alias_input () const -> slint::SharedString;
    auto set_alias_input (const slint::SharedString &value) const -> void;
    auto get_alias_open () const -> bool;
    auto set_alias_open (const bool &value) const -> void;
    auto get_autostart_enabled () const -> bool;
    auto set_autostart_enabled (const bool &value) const -> void;
    auto invoke_browse_save_path () const -> void;
    template<std::invocable<> Functor> auto on_browse_save_path (Functor && callback_handler) const;
    auto invoke_cancel_portable_service () const -> void;
    template<std::invocable<> Functor> auto on_cancel_portable_service (Functor && callback_handler) const;
    auto invoke_cancel_self_hosted_settings () const -> void;
    template<std::invocable<> Functor> auto on_cancel_self_hosted_settings (Functor && callback_handler) const;
    auto invoke_cancel_settings () const -> void;
    template<std::invocable<> Functor> auto on_cancel_settings (Functor && callback_handler) const;
    auto invoke_close_main_window () const -> void;
    template<std::invocable<> Functor> auto on_close_main_window (Functor && callback_handler) const;
    auto get_codec_index () const -> int;
    auto set_codec_index (const int &value) const -> void;
    auto invoke_connect_requested (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_connect_requested (Functor && callback_handler) const;
    auto invoke_connection_acknowledge () const -> void;
    template<std::invocable<> Functor> auto on_connection_acknowledge (Functor && callback_handler) const;
    auto invoke_connection_cancel () const -> void;
    template<std::invocable<> Functor> auto on_connection_cancel (Functor && callback_handler) const;
    auto get_connection_dialog_open () const -> bool;
    auto set_connection_dialog_open (const bool &value) const -> void;
    auto get_connection_password () const -> slint::SharedString;
    auto set_connection_password (const slint::SharedString &value) const -> void;
    auto get_connection_password_required () const -> bool;
    auto set_connection_password_required (const bool &value) const -> void;
    auto get_connection_pending () const -> bool;
    auto set_connection_pending (const bool &value) const -> void;
    auto get_connection_remember_password () const -> bool;
    auto set_connection_remember_password (const bool &value) const -> void;
    auto get_connection_status_text () const -> slint::SharedString;
    auto set_connection_status_text (const slint::SharedString &value) const -> void;
    auto invoke_connection_submit_password (slint::SharedString arg_0, bool arg_1) const -> void;
    template<std::invocable<slint::SharedString, bool> Functor> auto on_connection_submit_password (Functor && callback_handler) const;
    auto get_connection_validating () const -> bool;
    auto set_connection_validating (const bool &value) const -> void;
    auto invoke_copy_local_id () const -> void;
    template<std::invocable<> Functor> auto on_copy_local_id (Functor && callback_handler) const;
    auto get_coturn_port () const -> slint::SharedString;
    auto set_coturn_port (const slint::SharedString &value) const -> void;
    auto get_current_version () const -> slint::SharedString;
    auto set_current_version (const slint::SharedString &value) const -> void;
    auto get_custom_titlebar () const -> bool;
    auto set_custom_titlebar (const bool &value) const -> void;
    auto get_daemon_enabled () const -> bool;
    auto set_daemon_enabled (const bool &value) const -> void;
    auto get_delete_open () const -> bool;
    auto set_delete_open (const bool &value) const -> void;
    auto get_file_save_path () const -> slint::SharedString;
    auto set_file_save_path (const slint::SharedString &value) const -> void;
    auto invoke_format_remote_id (slint::SharedString arg_0) const -> slint::SharedString;
    template<std::invocable<slint::SharedString> Functor> auto on_format_remote_id (Functor && callback_handler) const;
    auto get_frame_rate_index () const -> int;
    auto set_frame_rate_index (const int &value) const -> void;
    auto get_hardware_codec_available () const -> bool;
    auto set_hardware_codec_available (const bool &value) const -> void;
    auto get_hardware_codec_enabled () const -> bool;
    auto set_hardware_codec_enabled (const bool &value) const -> void;
    auto invoke_install_portable_service () const -> void;
    template<std::invocable<> Functor> auto on_install_portable_service (Functor && callback_handler) const;
    auto get_language_index () const -> int;
    auto set_language_index (const int &value) const -> void;
    auto get_latest_version () const -> slint::SharedString;
    auto set_latest_version (const slint::SharedString &value) const -> void;
    auto get_local_id () const -> slint::SharedString;
    auto set_local_id (const slint::SharedString &value) const -> void;
    auto get_local_password () const -> slint::SharedString;
    auto set_local_password (const slint::SharedString &value) const -> void;
    auto invoke_main_title_drag (int arg_0, float arg_1, float arg_2) const -> void;
    template<std::invocable<int, float, float> Functor> auto on_main_title_drag (Functor && callback_handler) const;
    auto invoke_minimize_main_window () const -> void;
    template<std::invocable<> Functor> auto on_minimize_main_window (Functor && callback_handler) const;
    auto get_minimize_to_tray_enabled () const -> bool;
    auto set_minimize_to_tray_enabled (const bool &value) const -> void;
    auto get_new_password_input () const -> slint::SharedString;
    auto set_new_password_input (const slint::SharedString &value) const -> void;
    auto get_offline_warning () const -> slint::SharedString;
    auto set_offline_warning (const slint::SharedString &value) const -> void;
    auto invoke_open_download () const -> void;
    template<std::invocable<> Functor> auto on_open_download (Functor && callback_handler) const;
    auto get_password_visible () const -> bool;
    auto set_password_visible (const bool &value) const -> void;
    auto get_permission_dialog_open () const -> bool;
    auto set_permission_dialog_open (const bool &value) const -> void;
    auto get_portable_service_dialog_open () const -> bool;
    auto set_portable_service_dialog_open (const bool &value) const -> void;
    auto get_portable_service_do_not_remind () const -> bool;
    auto set_portable_service_do_not_remind (const bool &value) const -> void;
    auto get_portable_service_installed () const -> bool;
    auto set_portable_service_installed (const bool &value) const -> void;
    auto get_portable_service_installing () const -> bool;
    auto set_portable_service_installing (const bool &value) const -> void;
    auto get_portable_service_settings_visible () const -> bool;
    auto set_portable_service_settings_visible (const bool &value) const -> void;
    auto get_portable_service_status () const -> slint::SharedString;
    auto set_portable_service_status (const slint::SharedString &value) const -> void;
    auto get_portable_service_succeeded () const -> bool;
    auto set_portable_service_succeeded (const bool &value) const -> void;
    auto get_portable_service_suppressed_notice_open () const -> bool;
    auto set_portable_service_suppressed_notice_open (const bool &value) const -> void;
    auto invoke_recent_connect (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_recent_connect (Functor && callback_handler) const;
    auto get_recent_connections () const -> std::shared_ptr<slint::Model<RecentConnection>>;
    auto set_recent_connections (const std::shared_ptr<slint::Model<RecentConnection>> &value) const -> void;
    auto invoke_recent_delete (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_recent_delete (Functor && callback_handler) const;
    auto invoke_recent_edit_alias (slint::SharedString arg_0, slint::SharedString arg_1) const -> void;
    template<std::invocable<slint::SharedString, slint::SharedString> Functor> auto on_recent_edit_alias (Functor && callback_handler) const;
    auto get_release_date () const -> slint::SharedString;
    auto set_release_date (const slint::SharedString &value) const -> void;
    auto get_release_name () const -> slint::SharedString;
    auto set_release_name (const slint::SharedString &value) const -> void;
    auto get_release_note_blocks () const -> std::shared_ptr<slint::Model<ReleaseNoteBlock>>;
    auto set_release_note_blocks (const std::shared_ptr<slint::Model<ReleaseNoteBlock>> &value) const -> void;
    auto get_remote_id_input () const -> slint::SharedString;
    auto set_remote_id_input (const slint::SharedString &value) const -> void;
    auto invoke_request_accessibility_permission () const -> void;
    template<std::invocable<> Functor> auto on_request_accessibility_permission (Functor && callback_handler) const;
    auto invoke_request_screen_recording_permission () const -> void;
    template<std::invocable<> Functor> auto on_request_screen_recording_permission (Functor && callback_handler) const;
    auto invoke_reset_password (slint::SharedString arg_0) const -> bool;
    template<std::invocable<slint::SharedString> Functor> auto on_reset_password (Functor && callback_handler) const;
    auto get_reset_password_invalid () const -> bool;
    auto set_reset_password_invalid (const bool &value) const -> void;
    auto get_reset_password_open () const -> bool;
    auto set_reset_password_open (const bool &value) const -> void;
    auto invoke_reset_remote_id () const -> void;
    template<std::invocable<> Functor> auto on_reset_remote_id (Functor && callback_handler) const;
    auto invoke_save_self_hosted_settings () const -> void;
    template<std::invocable<> Functor> auto on_save_self_hosted_settings (Functor && callback_handler) const;
    auto invoke_save_settings () const -> void;
    template<std::invocable<> Functor> auto on_save_settings (Functor && callback_handler) const;
    auto get_screen_recording_granted () const -> bool;
    auto set_screen_recording_granted (const bool &value) const -> void;
    auto get_self_host_settings_open () const -> bool;
    auto set_self_host_settings_open (const bool &value) const -> void;
    auto get_self_hosted_enabled () const -> bool;
    auto set_self_hosted_enabled (const bool &value) const -> void;
    auto get_server_host () const -> slint::SharedString;
    auto set_server_host (const slint::SharedString &value) const -> void;
    auto get_server_port () const -> slint::SharedString;
    auto set_server_port (const slint::SharedString &value) const -> void;
    auto get_settings_open () const -> bool;
    auto set_settings_open (const bool &value) const -> void;
    auto get_settings_session_active () const -> bool;
    auto set_settings_session_active (const bool &value) const -> void;
    auto get_signal_connected () const -> bool;
    auto set_signal_connected (const bool &value) const -> void;
    auto get_signal_tls_error () const -> bool;
    auto set_signal_tls_error (const bool &value) const -> void;
    auto get_srtp_enabled () const -> bool;
    auto set_srtp_enabled (const bool &value) const -> void;
    auto invoke_toggle_password_visibility () const -> void;
    template<std::invocable<> Functor> auto on_toggle_password_visibility (Functor && callback_handler) const;
    auto get_turn_enabled () const -> bool;
    auto set_turn_enabled (const bool &value) const -> void;
    auto get_update_available () const -> bool;
    auto set_update_available (const bool &value) const -> void;
    auto get_update_open () const -> bool;
    auto set_update_open (const bool &value) const -> void;
    auto get_video_quality_index () const -> int;
    auto set_video_quality_index (const int &value) const -> void;
    auto get_wayland_titlebar () const -> bool;
    auto set_wayland_titlebar (const bool &value) const -> void;
    auto get_window_active () const -> bool;
    auto set_window_active (const bool &value) const -> void;
    private:
    auto get_alias_remote_id () const = SLINT_DELETED_FUNCTION("the property 'alias-remote-id' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_alias_remote_id (const auto &) const = SLINT_DELETED_FUNCTION("property 'alias-remote-id' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_compact_language () const = SLINT_DELETED_FUNCTION("the property 'compact-language' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_compact_language (const auto &) const = SLINT_DELETED_FUNCTION("property 'compact-language' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_copy_toast () const = SLINT_DELETED_FUNCTION("the property 'copy-toast' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_copy_toast (const auto &) const = SLINT_DELETED_FUNCTION("property 'copy-toast' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_delete_remote_id () const = SLINT_DELETED_FUNCTION("the property 'delete-remote-id' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_delete_remote_id (const auto &) const = SLINT_DELETED_FUNCTION("property 'delete-remote-id' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_menu_open () const = SLINT_DELETED_FUNCTION("the property 'menu-open' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_menu_open (const auto &) const = SLINT_DELETED_FUNCTION("property 'menu-open' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_height () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-height' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_height (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-height' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_host () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-host' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_host (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-host' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_id () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-id' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_id (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-id' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_name () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-name' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_name (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-name' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_online () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-online' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_online (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-online' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_pointer_x () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-pointer-x' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_pointer_x (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-pointer-x' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_pointer_y () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-pointer-y' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_pointer_y (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-pointer-y' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_visible () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-visible' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_visible (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-visible' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_width () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-width' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_width (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-width' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_x () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-x' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_x (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-x' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_recent_tooltip_y () const = SLINT_DELETED_FUNCTION("the property 'recent-tooltip-y' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_recent_tooltip_y (const auto &) const = SLINT_DELETED_FUNCTION("property 'recent-tooltip-y' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_settings_scroll_y () const = SLINT_DELETED_FUNCTION("the property 'settings-scroll-y' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_settings_scroll_y (const auto &) const = SLINT_DELETED_FUNCTION("property 'settings-scroll-y' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_titlebar_height () const = SLINT_DELETED_FUNCTION("the property 'titlebar-height' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_titlebar_height (const auto &) const = SLINT_DELETED_FUNCTION("property 'titlebar-height' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_update_icon_blink_on () const = SLINT_DELETED_FUNCTION("the property 'update-icon-blink-on' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_update_icon_blink_on (const auto &) const = SLINT_DELETED_FUNCTION("property 'update-icon-blink-on' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_wayland_corner_radius () const = SLINT_DELETED_FUNCTION("the property 'wayland-corner-radius' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_wayland_corner_radius (const auto &) const = SLINT_DELETED_FUNCTION("property 'wayland-corner-radius' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    public:
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class StreamStrings;
    friend class UiStrings;
    friend class FluentPalette_723;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>;
    friend class Component_onlinestatusindicator_151;
    friend class Component_rectangle_153;
    friend class Component_rectangle_157;
    friend class Component_rectangle_163;
    friend class Component_connection_card_147;
    friend class Component_onlinestatusindicator_194;
    friend class Component_rectangle_196;
    friend class Component_text_201;
    friend class Component_toucharea_203;
    friend class Component_text_213;
    friend class Component_rectangle_205;
    friend class Component_rectangle_218;
    friend class Component_rectangle_221;
    friend class Component_rectangle_228;
    friend class Component_rectangle_242;
    friend class Component_rectangle_254;
    friend class Component_rectangle_263;
    friend class Component_text_343;
    friend class Component_rectangle_345;
    friend class Component_rectangle_339;
    friend class Component_empty_370;
    friend class Component_rectangle_356;
    friend class Component_rectangle_407;
    friend class Component_rectangle_411;
    friend class Component_connectiondialogbutton_416;
    friend class Component_connectiondialogbutton_418;
    friend class Component_rectangle_405;
    friend class Component_secondarybutton_424;
    friend class Component_primarybutton_426;
    friend class Component_empty_421;
    friend class Component_rectangle_402;
    friend class Component_rectangle_430;
    friend class Component_text_454;
    friend class Component_rectangle_451;
    friend class Component_rectangle_459;
    friend class Component_text_478;
    friend class Component_empty_480;
    friend class Component_primarybutton_485;
    friend class Component_primarybutton_487;
    friend class Component_secondarybutton_489;
    friend class Component_rectangle_471;
    friend class Component_rectangle_492;
    friend class Component_rectangle_500;
    friend class Component_rectangle_511;
    friend class Component_rectangle_523;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component_connection_card_147;
    friend class Component_onlinestatusindicator_151;
    friend class Component_rectangle_153;
    friend class Component_rectangle_157;
    friend class Component_rectangle_163;
    friend class Component_onlinestatusindicator_194;
    friend class Component_rectangle_196;
    friend class Component_text_201;
    friend class Component_toucharea_203;
    friend class Component_rectangle_205;
    friend class Component_text_213;
    friend class Component_rectangle_218;
    friend class Component_rectangle_221;
    friend class Component_rectangle_228;
    friend class Component_rectangle_242;
    friend class Component_rectangle_254;
    friend class Component_rectangle_263;
    friend class Component_rectangle_339;
    friend class Component_text_343;
    friend class Component_rectangle_345;
    friend class Component_rectangle_356;
    friend class Component_empty_370;
    friend class Component_rectangle_402;
    friend class Component_rectangle_405;
    friend class Component_rectangle_407;
    friend class Component_rectangle_411;
    friend class Component_connectiondialogbutton_416;
    friend class Component_connectiondialogbutton_418;
    friend class Component_empty_421;
    friend class Component_secondarybutton_424;
    friend class Component_primarybutton_426;
    friend class Component_rectangle_430;
    friend class Component_rectangle_451;
    friend class Component_text_454;
    friend class Component_rectangle_459;
    friend class Component_rectangle_471;
    friend class Component_text_478;
    friend class Component_empty_480;
    friend class Component_primarybutton_485;
    friend class Component_primarybutton_487;
    friend class Component_secondarybutton_489;
    friend class Component_rectangle_492;
    friend class Component_rectangle_500;
    friend class Component_rectangle_511;
    friend class Component_rectangle_523;
};

class Component_rectangle_532 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ServerWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_532_empty_533_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_533_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_533_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_532_empty_534_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_534_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_534_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_532_empty_538_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_538_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_empty_538_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_532_empty_543_layout_cache;
    slint::private_api::Property<float> field_rectangle_532_rectangle_542_width;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_rectangle_547_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_532_rectangle_547_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_532_text_548_min_height;
    slint::private_api::Property<float> field_rectangle_532_text_548_min_width;
    slint::private_api::Property<float> field_rectangle_532_text_548_preferred_height;
    slint::private_api::Property<float> field_rectangle_532_text_548_preferred_width;
    slint::private_api::ChangeTracker change_tracker0;
    CompactComboBox_root_56 field_compactcombobox_536;
    SecondaryButton_root_42 field_secondarybutton_545;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_532 = {};
    slint::cbindgen_private::Empty field_empty_534 = {};
    slint::cbindgen_private::ComplexText field_text_535 = {};
    slint::cbindgen_private::Rectangle field_rectangle_537 = {};
    slint::cbindgen_private::Empty field_empty_538 = {};
    slint::cbindgen_private::ComplexText field_text_539 = {};
    slint::cbindgen_private::ComplexText field_text_540 = {};
    slint::cbindgen_private::Rectangle field_rectangle_541 = {};
    slint::cbindgen_private::Empty field_rectangle_542 = {};
    slint::cbindgen_private::Empty field_empty_543 = {};
    slint::cbindgen_private::ComplexText field_text_544 = {};
    slint::cbindgen_private::Clip field__visibility_546 = {};
    slint::cbindgen_private::Empty field_rectangle_547 = {};
    slint::cbindgen_private::SimpleText field_text_548 = {};
    slint::cbindgen_private::TouchArea field_transfer_touch_549 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ServerWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ServerWindow const * parent) -> slint::ComponentHandle<Component_rectangle_532>;
    ~Component_rectangle_532 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_532>;
};

class Component_iconbutton_551 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ServerWindow const> parent;
    IconButton_root_1 field_iconbutton_551;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ServerWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ServerWindow const * parent) -> slint::ComponentHandle<Component_iconbutton_551>;
    ~Component_iconbutton_551 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_iconbutton_551>;
};

class Component_rectangle_553 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ServerWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_553_empty_554_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_553_empty_554_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_553_empty_554_layoutinfo_v;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_553 = {};
    slint::cbindgen_private::ComplexText field_text_555 = {};
    slint::cbindgen_private::SimpleText field_text_556 = {};
    slint::cbindgen_private::SimpleText field_text_557 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ServerWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ServerWindow const * parent) -> slint::ComponentHandle<Component_rectangle_553>;
    ~Component_rectangle_553 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_553>;
};

class ServerWindow {
    SharedGlobals m_globals;
    public:
    template<typename T> auto global () const -> const T&;
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_525_collapsed;
    slint::private_api::Property<slint::SharedString> field_root_525_connection_label;
    slint::private_api::Property<slint::SharedString> field_root_525_connection_status;
    slint::private_api::Property<slint::SharedString> field_root_525_controller_label;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> field_root_525_controller_names;
    slint::private_api::Property<std::shared_ptr<slint::Model<ControllerEntry>>> field_root_525_controllers;
    slint::private_api::Property<slint::SharedString> field_root_525_current_file_name;
    slint::private_api::Property<int> field_root_525_drag_531_phase;
    slint::private_api::Property<float> field_root_525_file_progress;
    slint::private_api::Property<slint::SharedString> field_root_525_file_progress_text;
    slint::private_api::Property<slint::SharedString> field_root_525_file_size_text;
    slint::private_api::Property<slint::SharedString> field_root_525_file_transfer_label;
    slint::private_api::Property<bool> field_root_525_file_transfer_visible;
    slint::private_api::Property<int> field_root_525_language_index;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_525_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_525_layoutinfo_v;
    slint::private_api::Property<float> field_root_525_rectangle_526_width;
    slint::private_api::Property<slint::SharedString> field_root_525_select_file_label;
    slint::private_api::Property<int> field_root_525_selected_controller;
    slint::private_api::Property<bool> field_root_525_sending_file;
    slint::private_api::Property<bool> field_root_525_transfer_hovered;
    slint::private_api::Callback<void(int)> field_root_525_controller_selected;
    slint::private_api::Property<uint8_t> callback_tracker_root_525_controller_selected;
    slint::private_api::Callback<void()> field_root_525_disconnect_controller;
    slint::private_api::Property<uint8_t> callback_tracker_root_525_disconnect_controller;
    slint::private_api::Callback<void()> field_root_525_select_file;
    slint::private_api::Property<uint8_t> callback_tracker_root_525_select_file;
    slint::private_api::Callback<void(int, float, float)> field_root_525_title_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_525_title_drag;
    slint::private_api::Callback<void(bool)> field_root_525_toggle_collapsed;
    slint::private_api::Property<uint8_t> callback_tracker_root_525_toggle_collapsed;
    slint::private_api::ChangeTracker change_tracker0;
    IconButton_root_1 field_iconbutton_530;
    slint::cbindgen_private::WindowItem field_root_525 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_526 = {};
    slint::cbindgen_private::Clip field__clip_527 = {};
    slint::cbindgen_private::Rectangle field_rectangle_528 = {};
    slint::cbindgen_private::Rectangle field_rectangle_529 = {};
    slint::cbindgen_private::TouchArea field_drag_531 = {};
    slint::private_api::Conditional<class Component_rectangle_532> repeater_0;
    slint::private_api::Conditional<class Component_iconbutton_551> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_553> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<ServerWindow>;
    ~ServerWindow ();
    auto get_connection_label () const -> slint::SharedString;
    auto set_connection_label (const slint::SharedString &value) const -> void;
    auto get_connection_status () const -> slint::SharedString;
    auto set_connection_status (const slint::SharedString &value) const -> void;
    auto get_controller_label () const -> slint::SharedString;
    auto set_controller_label (const slint::SharedString &value) const -> void;
    auto get_controller_names () const -> std::shared_ptr<slint::Model<slint::SharedString>>;
    auto set_controller_names (const std::shared_ptr<slint::Model<slint::SharedString>> &value) const -> void;
    auto invoke_controller_selected (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_controller_selected (Functor && callback_handler) const;
    auto get_controllers () const -> std::shared_ptr<slint::Model<ControllerEntry>>;
    auto set_controllers (const std::shared_ptr<slint::Model<ControllerEntry>> &value) const -> void;
    auto get_current_file_name () const -> slint::SharedString;
    auto set_current_file_name (const slint::SharedString &value) const -> void;
    auto invoke_disconnect_controller () const -> void;
    template<std::invocable<> Functor> auto on_disconnect_controller (Functor && callback_handler) const;
    auto get_file_progress () const -> float;
    auto set_file_progress (const float &value) const -> void;
    auto get_file_progress_text () const -> slint::SharedString;
    auto set_file_progress_text (const slint::SharedString &value) const -> void;
    auto get_file_size_text () const -> slint::SharedString;
    auto set_file_size_text (const slint::SharedString &value) const -> void;
    auto get_file_transfer_label () const -> slint::SharedString;
    auto set_file_transfer_label (const slint::SharedString &value) const -> void;
    auto get_file_transfer_visible () const -> bool;
    auto set_file_transfer_visible (const bool &value) const -> void;
    auto get_language_index () const -> int;
    auto set_language_index (const int &value) const -> void;
    auto invoke_select_file () const -> void;
    template<std::invocable<> Functor> auto on_select_file (Functor && callback_handler) const;
    auto get_select_file_label () const -> slint::SharedString;
    auto set_select_file_label (const slint::SharedString &value) const -> void;
    auto get_selected_controller () const -> int;
    auto set_selected_controller (const int &value) const -> void;
    auto get_sending_file () const -> bool;
    auto set_sending_file (const bool &value) const -> void;
    auto invoke_title_drag (int arg_0, float arg_1, float arg_2) const -> void;
    template<std::invocable<int, float, float> Functor> auto on_title_drag (Functor && callback_handler) const;
    auto invoke_toggle_collapsed (bool arg_0) const -> void;
    template<std::invocable<bool> Functor> auto on_toggle_collapsed (Functor && callback_handler) const;
    private:
    auto get_collapsed () const = SLINT_DELETED_FUNCTION("the property 'collapsed' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_collapsed (const auto &) const = SLINT_DELETED_FUNCTION("property 'collapsed' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_transfer_hovered () const = SLINT_DELETED_FUNCTION("the property 'transfer-hovered' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_transfer_hovered (const auto &) const = SLINT_DELETED_FUNCTION("property 'transfer-hovered' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    public:
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class StreamStrings;
    friend class UiStrings;
    friend class FluentPalette_723;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, ServerWindow>;
    friend class Component_rectangle_532;
    friend class Component_iconbutton_551;
    friend class Component_rectangle_553;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component_rectangle_532;
    friend class Component_iconbutton_551;
    friend class Component_rectangle_553;
};

class Component_empty_580 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_573 const> parent;
    slint::private_api::Property<FileTransferEntry> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_580_empty_581_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_empty_581_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_empty_581_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_580_empty_586_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_empty_586_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_empty_586_layoutinfo_v;
    slint::private_api::Property<float> field_empty_580_height;
    slint::private_api::Property<slint::SharedVector<float>> field_empty_580_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_empty_580_layoutinfo_v;
    slint::private_api::Property<float> field_empty_580_rectangle_585_width;
    slint::private_api::Property<float> field_empty_580_width;
    slint::private_api::Property<float> field_empty_580_y;
    slint::cbindgen_private::Empty field_empty_580 = {};
    slint::cbindgen_private::Empty field_empty_581 = {};
    slint::cbindgen_private::ComplexText field_text_582 = {};
    slint::cbindgen_private::SimpleText field_text_583 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_584 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_585 = {};
    slint::cbindgen_private::Empty field_empty_586 = {};
    slint::cbindgen_private::SimpleText field_text_587 = {};
    slint::cbindgen_private::SimpleText field_text_588 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_573 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_573 const * parent) -> slint::ComponentHandle<Component_empty_580>;
    ~Component_empty_580 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const FileTransferEntry &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_580>;
};

class Component_rectangle_573 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<int> field_rectangle_573_down_scroll_button_600_state;
    slint::private_api::Property<int> field_rectangle_573_down_scroll_button_613_state;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_573_empty_576_horizontal_scrollbar_policy;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_rectangle_573_empty_576_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_rectangle_573_empty_576_visible_height;
    slint::private_api::Property<float> field_rectangle_573_empty_576_visible_width;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_573_empty_579_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_573_empty_579_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_573_empty_579_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_max_height;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_max_width;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_min_height;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_min_width;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_preferred_height;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_preferred_width;
    slint::private_api::Property<float> field_rectangle_573_flickable_577_vertical_stretch;
    slint::private_api::Property<float> field_rectangle_573_horizontal_bar_604_maximum;
    slint::private_api::Property<float> field_rectangle_573_horizontal_bar_604_size;
    slint::private_api::Property<int> field_rectangle_573_horizontal_bar_604_state;
    slint::private_api::Property<bool> field_rectangle_573_horizontal_bar_604_visible;
    slint::private_api::Property<float> field_rectangle_573_horizontal_bar_604_width;
    slint::private_api::Property<float> field_rectangle_573_text_574_min_height;
    slint::private_api::Property<float> field_rectangle_573_text_574_min_width;
    slint::private_api::Property<float> field_rectangle_573_text_574_preferred_height;
    slint::private_api::Property<float> field_rectangle_573_text_574_preferred_width;
    slint::private_api::Property<float> field_rectangle_573_thumb_593_height;
    slint::private_api::Property<float> field_rectangle_573_thumb_593_width;
    slint::private_api::Property<float> field_rectangle_573_thumb_593_y;
    slint::private_api::Property<float> field_rectangle_573_thumb_606_height;
    slint::private_api::Property<float> field_rectangle_573_thumb_606_width;
    slint::private_api::Property<float> field_rectangle_573_thumb_606_x;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_573_touch_area_594_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_rectangle_573_touch_area_607_saved_values;
    slint::private_api::Property<int> field_rectangle_573_up_scroll_button_596_state;
    slint::private_api::Property<int> field_rectangle_573_up_scroll_button_609_state;
    slint::private_api::Property<float> field_rectangle_573_vertical_bar_591_height;
    slint::private_api::Property<float> field_rectangle_573_vertical_bar_591_maximum;
    slint::private_api::Property<float> field_rectangle_573_vertical_bar_591_size;
    slint::private_api::Property<int> field_rectangle_573_vertical_bar_591_state;
    slint::private_api::Property<bool> field_rectangle_573_vertical_bar_591_visible;
    slint::private_api::Callback<void()> field_rectangle_573_horizontal_bar_604_scrolled;
    slint::private_api::Callback<void()> field_rectangle_573_vertical_bar_591_scrolled;
    IconButton_root_1 field_iconbutton_575;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_573 = {};
    slint::cbindgen_private::SimpleText field_text_574 = {};
    slint::cbindgen_private::Empty field_empty_576 = {};
    slint::cbindgen_private::Flickable field_flickable_577 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_578 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_590 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_591 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_592 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_593 = {};
    slint::cbindgen_private::TouchArea field_touch_area_594 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_595 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_596 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_597 = {};
    slint::cbindgen_private::ImageItem field_icon_598 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_599 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_600 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_601 = {};
    slint::cbindgen_private::ImageItem field_icon_602 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_603 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_604 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_605 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_606 = {};
    slint::cbindgen_private::TouchArea field_touch_area_607 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_608 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_609 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_610 = {};
    slint::cbindgen_private::ImageItem field_icon_611 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_612 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_613 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_614 = {};
    slint::cbindgen_private::ImageItem field_icon_615 = {};
    slint::private_api::Repeater<class Component_empty_580, FileTransferEntry> repeater_0;
    auto fn_empty_576_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_horizontal_bar_604_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_594_update_saved_values () const -> void;
    auto fn_touch_area_607_update_saved_values () const -> void;
    auto fn_vertical_bar_591_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_573>;
    ~Component_rectangle_573 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_573>;
};

class Component_rectangle_619 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::cbindgen_private::Rectangle field_rectangle_619 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_619>;
    ~Component_rectangle_619 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_619>;
};

class Component_display_button_621 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_display_button_621;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_display_button_621>;
    ~Component_display_button_621 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_display_button_621>;
};

class Component_shortcut_button_623 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_shortcut_button_623;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_shortcut_button_623>;
    ~Component_shortcut_button_623 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_shortcut_button_623>;
};

class Component_mouse_button_625 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_mouse_button_625;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_mouse_button_625>;
    ~Component_mouse_button_625 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_mouse_button_625>;
};

class Component_audio_button_627 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_audio_button_627;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_audio_button_627>;
    ~Component_audio_button_627 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_audio_button_627>;
};

class Component_file_button_629 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_file_button_629;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_file_button_629>;
    ~Component_file_button_629 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_file_button_629>;
};

class Component_stats_button_631 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_stats_button_631;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_stats_button_631>;
    ~Component_stats_button_631 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_stats_button_631>;
};

class Component_fullscreen_button_633 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_fullscreen_button_633;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_fullscreen_button_633>;
    ~Component_fullscreen_button_633 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_fullscreen_button_633>;
};

class Component_close_button_635 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    ControlBarButton_root_78 field_close_button_635;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_close_button_635>;
    ~Component_close_button_635 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_close_button_635>;
};

class Component_rectangle_637 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::cbindgen_private::Rectangle field_rectangle_637 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_637>;
    ~Component_rectangle_637 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_637>;
};

class Component_rectangle_647 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_stats_table_640 const> parent;
    slint::private_api::Property<NetworkStatsRow> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_647_text_648_min_height;
    slint::private_api::Property<float> field_rectangle_647_text_648_preferred_height;
    slint::private_api::Property<float> field_rectangle_647_text_649_min_height;
    slint::private_api::Property<float> field_rectangle_647_text_649_preferred_height;
    slint::private_api::Property<float> field_rectangle_647_text_650_min_height;
    slint::private_api::Property<float> field_rectangle_647_text_650_preferred_height;
    slint::private_api::Property<float> field_rectangle_647_text_651_min_height;
    slint::private_api::Property<float> field_rectangle_647_text_651_preferred_height;
    slint::cbindgen_private::Empty field_rectangle_647 = {};
    slint::cbindgen_private::SimpleText field_text_648 = {};
    slint::cbindgen_private::ComplexText field_text_649 = {};
    slint::cbindgen_private::ComplexText field_text_650 = {};
    slint::cbindgen_private::ComplexText field_text_651 = {};
    slint::cbindgen_private::Rectangle field_rectangle_652 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_stats_table_640 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_stats_table_640 const * parent) -> slint::ComponentHandle<Component_rectangle_647>;
    ~Component_rectangle_647 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const NetworkStatsRow &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_647>;
};

class Component_rectangle_654 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_stats_table_640 const> parent;
    slint::private_api::Property<std::tuple<slint::SharedString, slint::SharedString>> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_654_text_655_min_height;
    slint::private_api::Property<float> field_rectangle_654_text_655_preferred_height;
    slint::private_api::Property<float> field_rectangle_654_text_656_min_height;
    slint::private_api::Property<float> field_rectangle_654_text_656_preferred_height;
    slint::cbindgen_private::Empty field_rectangle_654 = {};
    slint::cbindgen_private::SimpleText field_text_655 = {};
    slint::cbindgen_private::ComplexText field_text_656 = {};
    slint::cbindgen_private::Rectangle field_rectangle_657 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_stats_table_640 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_stats_table_640 const * parent) -> slint::ComponentHandle<Component_rectangle_654>;
    ~Component_rectangle_654 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const std::tuple<slint::SharedString, slint::SharedString> &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_654>;
};

class Component_stats_table_640 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<float> field_stats_table_640_text_643_min_height;
    slint::private_api::Property<float> field_stats_table_640_text_643_preferred_height;
    slint::private_api::Property<float> field_stats_table_640_text_644_min_height;
    slint::private_api::Property<float> field_stats_table_640_text_644_preferred_height;
    slint::private_api::Property<float> field_stats_table_640_text_645_min_height;
    slint::private_api::Property<float> field_stats_table_640_text_645_preferred_height;
    slint::private_api::Property<float> field_stats_table_640_width;
    slint::cbindgen_private::Rectangle field_stats_table_640 = {};
    slint::cbindgen_private::Rectangle field_rectangle_641 = {};
    slint::cbindgen_private::Empty field_rectangle_642 = {};
    slint::cbindgen_private::SimpleText field_text_643 = {};
    slint::cbindgen_private::SimpleText field_text_644 = {};
    slint::cbindgen_private::ComplexText field_text_645 = {};
    slint::cbindgen_private::Rectangle field_rectangle_646 = {};
    slint::private_api::Repeater<class Component_rectangle_647, NetworkStatsRow> repeater_0;
    slint::private_api::Repeater<class Component_rectangle_654, std::tuple<slint::SharedString, slint::SharedString>> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_stats_table_640>;
    ~Component_stats_table_640 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_stats_table_640>;
};

class Component_rectangle_662 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_660 const> parent;
    slint::private_api::Property<slint::SharedString> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_662_text_663_min_height;
    slint::private_api::Property<float> field_rectangle_662_text_663_min_width;
    slint::private_api::Property<float> field_rectangle_662_text_663_preferred_height;
    slint::private_api::Property<float> field_rectangle_662_text_663_preferred_width;
    slint::private_api::Property<float> field_rectangle_662_y;
    slint::cbindgen_private::Rectangle field_rectangle_662 = {};
    slint::cbindgen_private::SimpleText field_text_663 = {};
    slint::cbindgen_private::TouchArea field_display_touch_664 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_660 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_660 const * parent) -> slint::ComponentHandle<Component_rectangle_662>;
    ~Component_rectangle_662 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::SharedString &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_662>;
};

class Component_rectangle_660 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_660_empty_661_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_660_empty_661_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_660_empty_661_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_660_x;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_660 = {};
    slint::private_api::Repeater<class Component_rectangle_662, slint::SharedString> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_660>;
    ~Component_rectangle_660 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_660>;
};

class Component_rectangle_669 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_667 const> parent;
    slint::private_api::Property<slint::SharedString> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_669_text_670_min_height;
    slint::private_api::Property<float> field_rectangle_669_text_670_min_width;
    slint::private_api::Property<float> field_rectangle_669_text_670_preferred_height;
    slint::private_api::Property<float> field_rectangle_669_text_670_preferred_width;
    slint::private_api::Property<float> field_rectangle_669_y;
    slint::cbindgen_private::Rectangle field_rectangle_669 = {};
    slint::cbindgen_private::SimpleText field_text_670 = {};
    slint::cbindgen_private::TouchArea field_shortcut_touch_671 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_667 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_667 const * parent) -> slint::ComponentHandle<Component_rectangle_669>;
    ~Component_rectangle_669 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::SharedString &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_669>;
};

class Component_rectangle_667 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_667_empty_668_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_667_empty_668_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_667_empty_668_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_667_x;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_667 = {};
    slint::private_api::Repeater<class Component_rectangle_669, slint::SharedString> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_667>;
    ~Component_rectangle_667 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_667>;
};

class Component_text_679 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_tab_item_677 const> parent;
    slint::cbindgen_private::ComplexText field_text_679 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_tab_item_677 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_tab_item_677 const * parent) -> slint::ComponentHandle<Component_text_679>;
    ~Component_text_679 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_679>;
};

class Component_tab_item_677 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<StreamTab> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_tab_item_677_rectangle_678_x;
    slint::private_api::Property<float> field_tab_item_677_tab_touch_683_x;
    slint::private_api::Property<float> field_tab_item_677_width;
    slint::private_api::Property<float> field_tab_item_677_x;
    slint::private_api::ChangeTracker change_tracker0;
    IconButton_root_1 field_iconbutton_684;
    slint::cbindgen_private::BasicBorderRectangle field_tab_item_677 = {};
    slint::cbindgen_private::Rectangle field_rectangle_678 = {};
    slint::cbindgen_private::ComplexText field_text_681 = {};
    slint::cbindgen_private::Rectangle field_rectangle_682 = {};
    slint::cbindgen_private::TouchArea field_tab_touch_683 = {};
    slint::private_api::Conditional<class Component_text_679> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_tab_item_677>;
    ~Component_tab_item_677 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const StreamTab &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_tab_item_677>;
};

class Component_rectangle_693 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_686 const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_693 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_686 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_686 const * parent) -> slint::ComponentHandle<Component_rectangle_693>;
    ~Component_rectangle_693 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_693>;
};

class Component_rectangle_695 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_686 const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_695 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_686 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_686 const * parent) -> slint::ComponentHandle<Component_rectangle_695>;
    ~Component_rectangle_695 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_695>;
};

class Component_rectangle_697 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_686 const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_697 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_686 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_686 const * parent) -> slint::ComponentHandle<Component_rectangle_697>;
    ~Component_rectangle_697 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_697>;
};

class Component_rectangle_686 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::private_api::Property<float> field_rectangle_686_path_701_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_686_path_701_max_height;
    slint::private_api::Property<float> field_rectangle_686_path_701_max_width;
    slint::private_api::Property<float> field_rectangle_686_path_701_min_height;
    slint::private_api::Property<float> field_rectangle_686_path_701_min_width;
    slint::private_api::Property<float> field_rectangle_686_path_701_preferred_height;
    slint::private_api::Property<float> field_rectangle_686_path_701_preferred_width;
    slint::private_api::Property<float> field_rectangle_686_path_701_vertical_stretch;
    slint::private_api::Property<slint::SharedString> field_rectangle_686_stream_maximize_button_692_accessible_label;
    slint::private_api::Property<int> field_rectangle_686_stream_title_drag_area_688_phase;
    slint::private_api::Property<float> field_rectangle_686_stream_title_drag_area_688_x;
    slint::private_api::Callback<void()> field_rectangle_686_stream_close_button_700_accessible_action_default;
    slint::private_api::Callback<void()> field_rectangle_686_stream_maximize_button_692_accessible_action_default;
    slint::private_api::Callback<void()> field_rectangle_686_stream_minimize_button_689_accessible_action_default;
    slint::private_api::ChangeTracker change_tracker0;
    slint::cbindgen_private::Rectangle field_rectangle_686 = {};
    slint::cbindgen_private::ComplexText field_text_687 = {};
    slint::cbindgen_private::TouchArea field_stream_title_drag_area_688 = {};
    slint::cbindgen_private::BasicBorderRectangle field_stream_minimize_button_689 = {};
    slint::cbindgen_private::Rectangle field_rectangle_690 = {};
    slint::cbindgen_private::TouchArea field_stream_minimize_touch_691 = {};
    slint::cbindgen_private::BasicBorderRectangle field_stream_maximize_button_692 = {};
    slint::cbindgen_private::TouchArea field_stream_maximize_touch_699 = {};
    slint::cbindgen_private::BasicBorderRectangle field_stream_close_button_700 = {};
    slint::cbindgen_private::Path field_path_701 = {};
    slint::cbindgen_private::TouchArea field_stream_close_touch_702 = {};
    slint::cbindgen_private::Rectangle field_rectangle_703 = {};
    slint::private_api::Conditional<class Component_rectangle_693> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_695> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_697> repeater_2;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_686>;
    ~Component_rectangle_686 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_686>;
};

class Component_rectangle_705 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StreamWindow const> parent;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_705 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StreamWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StreamWindow const * parent) -> slint::ComponentHandle<Component_rectangle_705>;
    ~Component_rectangle_705 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_705>;
};

class StreamWindow {
    SharedGlobals m_globals;
    public:
    template<typename T> auto global () const -> const T&;
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_559_audio_enabled;
    slint::private_api::Property<float> field_root_559_content_layer_562_height;
    slint::private_api::Property<float> field_root_559_content_layer_562_width;
    slint::private_api::Property<float> field_root_559_control_617_height;
    slint::private_api::Property<float> field_root_559_control_617_width;
    slint::private_api::Property<float> field_root_559_control_617_x;
    slint::private_api::Property<float> field_root_559_control_617_y;
    slint::private_api::Property<bool> field_root_559_control_docked_left;
    slint::private_api::Property<float> field_root_559_control_drag_x;
    slint::private_api::Property<bool> field_root_559_control_dragging;
    slint::private_api::Property<bool> field_root_559_control_expanded;
    slint::private_api::Property<float> field_root_559_control_pos_y;
    slint::private_api::Property<float> field_root_559_control_press_x;
    slint::private_api::Property<float> field_root_559_control_press_y;
    slint::private_api::Property<bool> field_root_559_custom_titlebar;
    slint::private_api::Property<bool> field_root_559_display_menu_open;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> field_root_559_displays;
    slint::private_api::Property<int> field_root_559_dragging_tab;
    slint::private_api::Property<slint::SharedVector<float>> field_root_559_empty_676_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_559_empty_676_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_559_empty_676_layoutinfo_v;
    slint::private_api::Property<bool> field_root_559_file_transfer_visible;
    slint::private_api::Property<std::shared_ptr<slint::Model<FileTransferEntry>>> field_root_559_file_transfers;
    slint::private_api::Property<slint::Image> field_root_559_frame;
    slint::private_api::Property<float> field_root_559_frame_image_567_preferred_height;
    slint::private_api::Property<float> field_root_559_frame_image_567_preferred_width;
    slint::private_api::Property<bool> field_root_559_fullscreen_enabled;
    slint::private_api::Property<bool> field_root_559_has_frame;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_559_layoutinfo_h;
    slint::private_api::Property<bool> field_root_559_mouse_control_enabled;
    slint::private_api::Property<slint::SharedString> field_root_559_receiving_text;
    slint::private_api::Property<bool> field_root_559_rectangle_675_visible;
    slint::private_api::Property<float> field_root_559_rectangle_675_width;
    slint::private_api::Property<int> field_root_559_selected_display;
    slint::private_api::Property<int> field_root_559_selected_tab;
    slint::private_api::Property<bool> field_root_559_shortcut_menu_open;
    slint::private_api::Property<bool> field_root_559_srtp_enabled;
    slint::private_api::Property<slint::SharedString> field_root_559_stats_connection_mode;
    slint::private_api::Property<slint::SharedString> field_root_559_stats_fps;
    slint::private_api::Property<slint::SharedString> field_root_559_stats_resolution;
    slint::private_api::Property<std::shared_ptr<slint::Model<NetworkStatsRow>>> field_root_559_stats_rows;
    slint::private_api::Property<bool> field_root_559_stats_visible;
    slint::private_api::Property<slint::SharedString> field_root_559_status_text;
    slint::private_api::Property<std::shared_ptr<slint::Model<StreamTab>>> field_root_559_tabs;
    slint::private_api::Property<float> field_root_559_text_569_min_height;
    slint::private_api::Property<float> field_root_559_text_569_min_width;
    slint::private_api::Property<float> field_root_559_text_569_preferred_height;
    slint::private_api::Property<float> field_root_559_text_569_preferred_width;
    slint::private_api::Property<bool> field_root_559_text_569_visible;
    slint::private_api::Property<float> field_root_559_text_569_x;
    slint::private_api::Property<float> field_root_559_text_569_y;
    slint::private_api::Property<float> field_root_559_titlebar_height;
    slint::private_api::Property<float> field_root_559_video_564_height;
    slint::private_api::Property<float> field_root_559_video_564_y;
    slint::private_api::Property<bool> field_root_559_window_active;
    slint::private_api::Property<bool> field_root_559_window_maximized;
    slint::private_api::Property<float> field_root_559_window_surface_560_width;
    slint::private_api::Callback<void(float, float)> field_root_559_begin_control_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_begin_control_drag;
    slint::private_api::Callback<bool(slint::DataTransfer)> field_root_559_can_drop_file;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_can_drop_file;
    slint::private_api::Callback<void()> field_root_559_close_file_transfer;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_close_file_transfer;
    slint::private_api::Callback<void()> field_root_559_close_stream_window;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_close_stream_window;
    slint::private_api::Callback<void(slint::SharedString)> field_root_559_close_tab;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_close_tab;
    slint::private_api::Callback<void()> field_root_559_disconnect;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_disconnect;
    slint::private_api::Callback<void()> field_root_559_end_control_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_end_control_drag;
    slint::private_api::Callback<void(slint::DataTransfer)> field_root_559_file_dropped;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_file_dropped;
    slint::private_api::Callback<void(slint::SharedString, bool, bool, bool, bool, bool)> field_root_559_key_input;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_key_input;
    slint::private_api::Callback<void(bool)> field_root_559_keyboard_focus_changed;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_keyboard_focus_changed;
    slint::private_api::Callback<void()> field_root_559_minimize_stream_window;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_minimize_stream_window;
    slint::private_api::Callback<void(float, float)> field_root_559_move_control_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_move_control_drag;
    slint::private_api::Callback<void(slint::cbindgen_private::PointerEventButton, slint::cbindgen_private::PointerEventKind, float, float)> field_root_559_pointer_input;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_pointer_input;
    slint::private_api::Callback<void(int, float, float)> field_root_559_reorder_tab;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_reorder_tab;
    slint::private_api::Callback<void(float, float, float, float)> field_root_559_scroll_input;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_scroll_input;
    slint::private_api::Callback<void()> field_root_559_select_file;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_select_file;
    slint::private_api::Callback<void(int)> field_root_559_select_tab;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_select_tab;
    slint::private_api::Callback<void(slint::SharedString)> field_root_559_send_shortcut;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_send_shortcut;
    slint::private_api::Callback<void(int, float, float)> field_root_559_stream_title_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_stream_title_drag;
    slint::private_api::Callback<void(int)> field_root_559_switch_display;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_switch_display;
    slint::private_api::Callback<void()> field_root_559_toggle_audio;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_toggle_audio;
    slint::private_api::Callback<void()> field_root_559_toggle_fullscreen;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_toggle_fullscreen;
    slint::private_api::Callback<void()> field_root_559_toggle_maximize_stream_window;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_toggle_maximize_stream_window;
    slint::private_api::Callback<void()> field_root_559_toggle_mouse_control;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_toggle_mouse_control;
    slint::private_api::Callback<void()> field_root_559_toggle_stats;
    slint::private_api::Property<uint8_t> callback_tracker_root_559_toggle_stats;
    ControlBarButton_root_78 field_collapse_button_639;
    slint::cbindgen_private::WindowItem field_root_559 = {};
    slint::cbindgen_private::BasicBorderRectangle field_window_surface_560 = {};
    slint::cbindgen_private::Clip field_window_surface_clip_561 = {};
    slint::cbindgen_private::Rectangle field_content_layer_562 = {};
    slint::cbindgen_private::Clip field_content_layer_clip_563 = {};
    slint::cbindgen_private::Rectangle field_video_564 = {};
    slint::cbindgen_private::Clip field_video_clip_565 = {};
    slint::cbindgen_private::Clip field_frame_image_visibility_566 = {};
    slint::cbindgen_private::ImageItem field_frame_image_567 = {};
    slint::cbindgen_private::Clip field__visibility_568 = {};
    slint::cbindgen_private::SimpleText field_text_569 = {};
    slint::cbindgen_private::DropArea field_drop_zone_570 = {};
    slint::cbindgen_private::FocusScope field_input_focus_571 = {};
    slint::cbindgen_private::TouchArea field_pointer_572 = {};
    slint::cbindgen_private::BasicBorderRectangle field_control_617 = {};
    slint::cbindgen_private::Clip field_control_clip_618 = {};
    slint::cbindgen_private::Clip field__visibility_674 = {};
    slint::cbindgen_private::Rectangle field_rectangle_675 = {};
    slint::private_api::Conditional<class Component_rectangle_573> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_619> repeater_1;
    slint::private_api::Conditional<class Component_display_button_621> repeater_2;
    slint::private_api::Conditional<class Component_shortcut_button_623> repeater_3;
    slint::private_api::Conditional<class Component_mouse_button_625> repeater_4;
    slint::private_api::Conditional<class Component_audio_button_627> repeater_5;
    slint::private_api::Conditional<class Component_file_button_629> repeater_6;
    slint::private_api::Conditional<class Component_stats_button_631> repeater_7;
    slint::private_api::Conditional<class Component_fullscreen_button_633> repeater_8;
    slint::private_api::Conditional<class Component_close_button_635> repeater_9;
    slint::private_api::Conditional<class Component_rectangle_637> repeater_10;
    slint::private_api::Conditional<class Component_stats_table_640> repeater_11;
    slint::private_api::Conditional<class Component_rectangle_660> repeater_12;
    slint::private_api::Conditional<class Component_rectangle_667> repeater_13;
    slint::private_api::Repeater<class Component_tab_item_677, StreamTab> repeater_14;
    slint::private_api::Conditional<class Component_rectangle_686> repeater_15;
    slint::private_api::Conditional<class Component_rectangle_705> repeater_16;
    public:
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_video_564_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    private:
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<StreamWindow>;
    ~StreamWindow ();
    auto get_audio_enabled () const -> bool;
    auto set_audio_enabled (const bool &value) const -> void;
    auto invoke_begin_control_drag (float arg_0, float arg_1) const -> void;
    template<std::invocable<float, float> Functor> auto on_begin_control_drag (Functor && callback_handler) const;
    auto invoke_can_drop_file (slint::DataTransfer arg_0) const -> bool;
    template<std::invocable<slint::DataTransfer> Functor> auto on_can_drop_file (Functor && callback_handler) const;
    auto invoke_close_file_transfer () const -> void;
    template<std::invocable<> Functor> auto on_close_file_transfer (Functor && callback_handler) const;
    auto invoke_close_stream_window () const -> void;
    template<std::invocable<> Functor> auto on_close_stream_window (Functor && callback_handler) const;
    auto invoke_close_tab (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_close_tab (Functor && callback_handler) const;
    auto get_custom_titlebar () const -> bool;
    auto set_custom_titlebar (const bool &value) const -> void;
    auto invoke_disconnect () const -> void;
    template<std::invocable<> Functor> auto on_disconnect (Functor && callback_handler) const;
    auto get_displays () const -> std::shared_ptr<slint::Model<slint::SharedString>>;
    auto set_displays (const std::shared_ptr<slint::Model<slint::SharedString>> &value) const -> void;
    auto invoke_end_control_drag () const -> void;
    template<std::invocable<> Functor> auto on_end_control_drag (Functor && callback_handler) const;
    auto invoke_file_dropped (slint::DataTransfer arg_0) const -> void;
    template<std::invocable<slint::DataTransfer> Functor> auto on_file_dropped (Functor && callback_handler) const;
    auto get_file_transfer_visible () const -> bool;
    auto set_file_transfer_visible (const bool &value) const -> void;
    auto get_file_transfers () const -> std::shared_ptr<slint::Model<FileTransferEntry>>;
    auto set_file_transfers (const std::shared_ptr<slint::Model<FileTransferEntry>> &value) const -> void;
    auto get_frame () const -> slint::Image;
    auto set_frame (const slint::Image &value) const -> void;
    auto get_fullscreen_enabled () const -> bool;
    auto set_fullscreen_enabled (const bool &value) const -> void;
    auto get_has_frame () const -> bool;
    auto set_has_frame (const bool &value) const -> void;
    auto invoke_key_input (slint::SharedString arg_0, bool arg_1, bool arg_2, bool arg_3, bool arg_4, bool arg_5) const -> void;
    template<std::invocable<slint::SharedString, bool, bool, bool, bool, bool> Functor> auto on_key_input (Functor && callback_handler) const;
    auto invoke_keyboard_focus_changed (bool arg_0) const -> void;
    template<std::invocable<bool> Functor> auto on_keyboard_focus_changed (Functor && callback_handler) const;
    auto invoke_minimize_stream_window () const -> void;
    template<std::invocable<> Functor> auto on_minimize_stream_window (Functor && callback_handler) const;
    auto get_mouse_control_enabled () const -> bool;
    auto set_mouse_control_enabled (const bool &value) const -> void;
    auto invoke_move_control_drag (float arg_0, float arg_1) const -> void;
    template<std::invocable<float, float> Functor> auto on_move_control_drag (Functor && callback_handler) const;
    auto invoke_pointer_input (slint::cbindgen_private::PointerEventButton arg_0, slint::cbindgen_private::PointerEventKind arg_1, float arg_2, float arg_3) const -> void;
    template<std::invocable<slint::cbindgen_private::PointerEventButton, slint::cbindgen_private::PointerEventKind, float, float> Functor> auto on_pointer_input (Functor && callback_handler) const;
    auto get_receiving_text () const -> slint::SharedString;
    auto set_receiving_text (const slint::SharedString &value) const -> void;
    auto invoke_reorder_tab (int arg_0, float arg_1, float arg_2) const -> void;
    template<std::invocable<int, float, float> Functor> auto on_reorder_tab (Functor && callback_handler) const;
    auto invoke_scroll_input (float arg_0, float arg_1, float arg_2, float arg_3) const -> void;
    template<std::invocable<float, float, float, float> Functor> auto on_scroll_input (Functor && callback_handler) const;
    auto invoke_select_file () const -> void;
    template<std::invocable<> Functor> auto on_select_file (Functor && callback_handler) const;
    auto invoke_select_tab (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_select_tab (Functor && callback_handler) const;
    auto get_selected_display () const -> int;
    auto set_selected_display (const int &value) const -> void;
    auto get_selected_tab () const -> int;
    auto set_selected_tab (const int &value) const -> void;
    auto invoke_send_shortcut (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_send_shortcut (Functor && callback_handler) const;
    auto get_srtp_enabled () const -> bool;
    auto set_srtp_enabled (const bool &value) const -> void;
    auto get_stats_connection_mode () const -> slint::SharedString;
    auto set_stats_connection_mode (const slint::SharedString &value) const -> void;
    auto get_stats_fps () const -> slint::SharedString;
    auto set_stats_fps (const slint::SharedString &value) const -> void;
    auto get_stats_resolution () const -> slint::SharedString;
    auto set_stats_resolution (const slint::SharedString &value) const -> void;
    auto get_stats_rows () const -> std::shared_ptr<slint::Model<NetworkStatsRow>>;
    auto set_stats_rows (const std::shared_ptr<slint::Model<NetworkStatsRow>> &value) const -> void;
    auto get_stats_visible () const -> bool;
    auto set_stats_visible (const bool &value) const -> void;
    auto get_status_text () const -> slint::SharedString;
    auto set_status_text (const slint::SharedString &value) const -> void;
    auto invoke_stream_title_drag (int arg_0, float arg_1, float arg_2) const -> void;
    template<std::invocable<int, float, float> Functor> auto on_stream_title_drag (Functor && callback_handler) const;
    auto invoke_switch_display (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_switch_display (Functor && callback_handler) const;
    auto get_tabs () const -> std::shared_ptr<slint::Model<StreamTab>>;
    auto set_tabs (const std::shared_ptr<slint::Model<StreamTab>> &value) const -> void;
    auto invoke_toggle_audio () const -> void;
    template<std::invocable<> Functor> auto on_toggle_audio (Functor && callback_handler) const;
    auto invoke_toggle_fullscreen () const -> void;
    template<std::invocable<> Functor> auto on_toggle_fullscreen (Functor && callback_handler) const;
    auto invoke_toggle_maximize_stream_window () const -> void;
    template<std::invocable<> Functor> auto on_toggle_maximize_stream_window (Functor && callback_handler) const;
    auto invoke_toggle_mouse_control () const -> void;
    template<std::invocable<> Functor> auto on_toggle_mouse_control (Functor && callback_handler) const;
    auto invoke_toggle_stats () const -> void;
    template<std::invocable<> Functor> auto on_toggle_stats (Functor && callback_handler) const;
    auto get_window_active () const -> bool;
    auto set_window_active (const bool &value) const -> void;
    auto get_window_maximized () const -> bool;
    auto set_window_maximized (const bool &value) const -> void;
    private:
    auto get_control_docked_left () const = SLINT_DELETED_FUNCTION("the property 'control-docked-left' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_docked_left (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-docked-left' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_drag_x () const = SLINT_DELETED_FUNCTION("the property 'control-drag-x' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_drag_x (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-drag-x' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_dragging () const = SLINT_DELETED_FUNCTION("the property 'control-dragging' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_dragging (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-dragging' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_expanded () const = SLINT_DELETED_FUNCTION("the property 'control-expanded' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_expanded (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-expanded' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_pos_y () const = SLINT_DELETED_FUNCTION("the property 'control-pos-y' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_pos_y (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-pos-y' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_press_x () const = SLINT_DELETED_FUNCTION("the property 'control-press-x' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_press_x (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-press-x' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_control_press_y () const = SLINT_DELETED_FUNCTION("the property 'control-press-y' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_control_press_y (const auto &) const = SLINT_DELETED_FUNCTION("property 'control-press-y' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_display_menu_open () const = SLINT_DELETED_FUNCTION("the property 'display-menu-open' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_display_menu_open (const auto &) const = SLINT_DELETED_FUNCTION("property 'display-menu-open' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_dragging_tab () const = SLINT_DELETED_FUNCTION("the property 'dragging-tab' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_dragging_tab (const auto &) const = SLINT_DELETED_FUNCTION("property 'dragging-tab' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_shortcut_menu_open () const = SLINT_DELETED_FUNCTION("the property 'shortcut-menu-open' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_shortcut_menu_open (const auto &) const = SLINT_DELETED_FUNCTION("property 'shortcut-menu-open' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_titlebar_height () const = SLINT_DELETED_FUNCTION("the property 'titlebar-height' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_titlebar_height (const auto &) const = SLINT_DELETED_FUNCTION("property 'titlebar-height' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    auto get_window_corner_radius () const = SLINT_DELETED_FUNCTION("the property 'window-corner-radius' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public");
    auto set_window_corner_radius (const auto &) const = SLINT_DELETED_FUNCTION("property 'window-corner-radius' is declared as private. Declare it as 'in' or 'in-out' to make it public");
    public:
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class StreamStrings;
    friend class UiStrings;
    friend class FluentPalette_723;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, StreamWindow>;
    friend class Component_empty_580;
    friend class Component_rectangle_573;
    friend class Component_rectangle_619;
    friend class Component_display_button_621;
    friend class Component_shortcut_button_623;
    friend class Component_mouse_button_625;
    friend class Component_audio_button_627;
    friend class Component_file_button_629;
    friend class Component_stats_button_631;
    friend class Component_fullscreen_button_633;
    friend class Component_close_button_635;
    friend class Component_rectangle_637;
    friend class Component_rectangle_647;
    friend class Component_rectangle_654;
    friend class Component_stats_table_640;
    friend class Component_rectangle_662;
    friend class Component_rectangle_660;
    friend class Component_rectangle_669;
    friend class Component_rectangle_667;
    friend class Component_text_679;
    friend class Component_tab_item_677;
    friend class Component_rectangle_693;
    friend class Component_rectangle_695;
    friend class Component_rectangle_697;
    friend class Component_rectangle_686;
    friend class Component_rectangle_705;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component_rectangle_573;
    friend class Component_empty_580;
    friend class Component_rectangle_619;
    friend class Component_display_button_621;
    friend class Component_shortcut_button_623;
    friend class Component_mouse_button_625;
    friend class Component_audio_button_627;
    friend class Component_file_button_629;
    friend class Component_stats_button_631;
    friend class Component_fullscreen_button_633;
    friend class Component_close_button_635;
    friend class Component_rectangle_637;
    friend class Component_stats_table_640;
    friend class Component_rectangle_647;
    friend class Component_rectangle_654;
    friend class Component_rectangle_660;
    friend class Component_rectangle_662;
    friend class Component_rectangle_667;
    friend class Component_rectangle_669;
    friend class Component_tab_item_677;
    friend class Component_text_679;
    friend class Component_rectangle_686;
    friend class Component_rectangle_693;
    friend class Component_rectangle_695;
    friend class Component_rectangle_697;
    friend class Component_rectangle_705;
};

extern const uint8_t slint_embedded_resource_0[419];

extern const uint8_t slint_embedded_resource_1[670];

extern const uint8_t slint_embedded_resource_2[350];

extern const uint8_t slint_embedded_resource_3[181];

extern const uint8_t slint_embedded_resource_4[918];

extern const uint8_t slint_embedded_resource_5[815];

extern const uint8_t slint_embedded_resource_6[1135];

extern const uint8_t slint_embedded_resource_7[849];

template<typename T> inline auto MainWindow::global () const -> const T&{
    if constexpr(std::is_same_v<T, StreamStrings>) { return *m_globals.global_StreamStrings.get(); }
    else if constexpr(std::is_same_v<T, UiStrings>) { return *m_globals.global_UiStrings.get(); }
    else { static_assert(!sizeof(T*), "The type is not global/or exported"); }
}

template<std::invocable<> Functor> inline auto MainWindow::on_acknowledge_portable_service (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_acknowledge_portable_service.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_acknowledge_portable_service.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_acknowledge_portable_service_suppressed (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_acknowledge_portable_service_suppressed.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_acknowledge_portable_service_suppressed.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_browse_save_path (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_browse_save_path.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_browse_save_path.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_cancel_portable_service (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_cancel_portable_service.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_cancel_portable_service.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_cancel_self_hosted_settings (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_cancel_self_hosted_settings.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_cancel_self_hosted_settings.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_cancel_settings (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_cancel_settings.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_cancel_settings.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_close_main_window (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_close_main_window.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_close_main_window.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto MainWindow::on_connect_requested (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_connect_requested.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_connect_requested.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_connection_acknowledge (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_connection_acknowledge.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_connection_acknowledge.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_connection_cancel (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_connection_cancel.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_connection_cancel.mark_dirty();
}

template<std::invocable<slint::SharedString, bool> Functor> inline auto MainWindow::on_connection_submit_password (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_connection_submit_password.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_connection_submit_password.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_copy_local_id (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_copy_local_id.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_copy_local_id.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto MainWindow::on_format_remote_id (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_format_remote_id.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_format_remote_id.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_install_portable_service (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_install_portable_service.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_install_portable_service.mark_dirty();
}

template<std::invocable<int, float, float> Functor> inline auto MainWindow::on_main_title_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_main_title_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_main_title_drag.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_minimize_main_window (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_minimize_main_window.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_minimize_main_window.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_open_download (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_open_download.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_open_download.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto MainWindow::on_recent_connect (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_recent_connect.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_recent_connect.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto MainWindow::on_recent_delete (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_recent_delete.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_recent_delete.mark_dirty();
}

template<std::invocable<slint::SharedString, slint::SharedString> Functor> inline auto MainWindow::on_recent_edit_alias (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_recent_edit_alias.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_recent_edit_alias.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_request_accessibility_permission (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_request_accessibility_permission.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_request_accessibility_permission.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_request_screen_recording_permission (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_request_screen_recording_permission.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_request_screen_recording_permission.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto MainWindow::on_reset_password (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_reset_password.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_reset_password.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_reset_remote_id (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_reset_remote_id.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_reset_remote_id.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_save_self_hosted_settings (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_save_self_hosted_settings.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_save_self_hosted_settings.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_save_settings (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_save_settings.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_save_settings.mark_dirty();
}

template<std::invocable<> Functor> inline auto MainWindow::on_toggle_password_visibility (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_108_toggle_password_visibility.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_108_toggle_password_visibility.mark_dirty();
}

template<typename T> inline auto ServerWindow::global () const -> const T&{
    if constexpr(std::is_same_v<T, StreamStrings>) { return *m_globals.global_StreamStrings.get(); }
    else if constexpr(std::is_same_v<T, UiStrings>) { return *m_globals.global_UiStrings.get(); }
    else { static_assert(!sizeof(T*), "The type is not global/or exported"); }
}

template<std::invocable<int> Functor> inline auto ServerWindow::on_controller_selected (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_525_controller_selected.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_525_controller_selected.mark_dirty();
}

template<std::invocable<> Functor> inline auto ServerWindow::on_disconnect_controller (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_525_disconnect_controller.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_525_disconnect_controller.mark_dirty();
}

template<std::invocable<> Functor> inline auto ServerWindow::on_select_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_525_select_file.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_525_select_file.mark_dirty();
}

template<std::invocable<int, float, float> Functor> inline auto ServerWindow::on_title_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_525_title_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_525_title_drag.mark_dirty();
}

template<std::invocable<bool> Functor> inline auto ServerWindow::on_toggle_collapsed (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_525_toggle_collapsed.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_525_toggle_collapsed.mark_dirty();
}

template<typename T> inline auto StreamWindow::global () const -> const T&{
    if constexpr(std::is_same_v<T, StreamStrings>) { return *m_globals.global_StreamStrings.get(); }
    else if constexpr(std::is_same_v<T, UiStrings>) { return *m_globals.global_UiStrings.get(); }
    else { static_assert(!sizeof(T*), "The type is not global/or exported"); }
}

template<std::invocable<float, float> Functor> inline auto StreamWindow::on_begin_control_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_begin_control_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_begin_control_drag.mark_dirty();
}

template<std::invocable<slint::DataTransfer> Functor> inline auto StreamWindow::on_can_drop_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_can_drop_file.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_can_drop_file.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_close_file_transfer (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_close_file_transfer.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_close_file_transfer.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_close_stream_window (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_close_stream_window.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_close_stream_window.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto StreamWindow::on_close_tab (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_close_tab.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_close_tab.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_disconnect (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_disconnect.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_disconnect.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_end_control_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_end_control_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_end_control_drag.mark_dirty();
}

template<std::invocable<slint::DataTransfer> Functor> inline auto StreamWindow::on_file_dropped (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_file_dropped.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_file_dropped.mark_dirty();
}

template<std::invocable<slint::SharedString, bool, bool, bool, bool, bool> Functor> inline auto StreamWindow::on_key_input (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_key_input.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_key_input.mark_dirty();
}

template<std::invocable<bool> Functor> inline auto StreamWindow::on_keyboard_focus_changed (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_keyboard_focus_changed.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_keyboard_focus_changed.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_minimize_stream_window (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_minimize_stream_window.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_minimize_stream_window.mark_dirty();
}

template<std::invocable<float, float> Functor> inline auto StreamWindow::on_move_control_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_move_control_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_move_control_drag.mark_dirty();
}

template<std::invocable<slint::cbindgen_private::PointerEventButton, slint::cbindgen_private::PointerEventKind, float, float> Functor> inline auto StreamWindow::on_pointer_input (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_pointer_input.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_pointer_input.mark_dirty();
}

template<std::invocable<int, float, float> Functor> inline auto StreamWindow::on_reorder_tab (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_reorder_tab.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_reorder_tab.mark_dirty();
}

template<std::invocable<float, float, float, float> Functor> inline auto StreamWindow::on_scroll_input (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_scroll_input.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_scroll_input.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_select_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_select_file.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_select_file.mark_dirty();
}

template<std::invocable<int> Functor> inline auto StreamWindow::on_select_tab (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_select_tab.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_select_tab.mark_dirty();
}

template<std::invocable<slint::SharedString> Functor> inline auto StreamWindow::on_send_shortcut (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_send_shortcut.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_send_shortcut.mark_dirty();
}

template<std::invocable<int, float, float> Functor> inline auto StreamWindow::on_stream_title_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_stream_title_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_stream_title_drag.mark_dirty();
}

template<std::invocable<int> Functor> inline auto StreamWindow::on_switch_display (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_switch_display.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_switch_display.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_toggle_audio (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_toggle_audio.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_toggle_audio.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_toggle_fullscreen (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_toggle_fullscreen.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_toggle_fullscreen.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_toggle_maximize_stream_window (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_toggle_maximize_stream_window.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_toggle_maximize_stream_window.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_toggle_mouse_control (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_toggle_mouse_control.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_toggle_mouse_control.mark_dirty();
}

template<std::invocable<> Functor> inline auto StreamWindow::on_toggle_stats (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_559_toggle_stats.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_559_toggle_stats.mark_dirty();
}
