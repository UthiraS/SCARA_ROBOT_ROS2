# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ikinterface:srv/Ivel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ivel_Request(type):
    """Metaclass of message 'Ivel_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ikinterface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ikinterface.srv.Ivel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ivel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ivel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ivel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ivel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ivel__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ivel_Request(metaclass=Metaclass_Ivel_Request):
    """Message class 'Ivel_Request'."""

    __slots__ = [
        '_endeff_vel_x',
        '_endeff_vel_y',
        '_endeff_vel_z',
    ]

    _fields_and_field_types = {
        'endeff_vel_x': 'float',
        'endeff_vel_y': 'float',
        'endeff_vel_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.endeff_vel_x = kwargs.get('endeff_vel_x', float())
        self.endeff_vel_y = kwargs.get('endeff_vel_y', float())
        self.endeff_vel_z = kwargs.get('endeff_vel_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.endeff_vel_x != other.endeff_vel_x:
            return False
        if self.endeff_vel_y != other.endeff_vel_y:
            return False
        if self.endeff_vel_z != other.endeff_vel_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def endeff_vel_x(self):
        """Message field 'endeff_vel_x'."""
        return self._endeff_vel_x

    @endeff_vel_x.setter
    def endeff_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endeff_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endeff_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endeff_vel_x = value

    @builtins.property
    def endeff_vel_y(self):
        """Message field 'endeff_vel_y'."""
        return self._endeff_vel_y

    @endeff_vel_y.setter
    def endeff_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endeff_vel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endeff_vel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endeff_vel_y = value

    @builtins.property
    def endeff_vel_z(self):
        """Message field 'endeff_vel_z'."""
        return self._endeff_vel_z

    @endeff_vel_z.setter
    def endeff_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'endeff_vel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'endeff_vel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._endeff_vel_z = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Ivel_Response(type):
    """Metaclass of message 'Ivel_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ikinterface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ikinterface.srv.Ivel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ivel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ivel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ivel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ivel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ivel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ivel_Response(metaclass=Metaclass_Ivel_Response):
    """Message class 'Ivel_Response'."""

    __slots__ = [
        '_joint1_vel',
        '_joint2_vel',
        '_joint3_vel',
    ]

    _fields_and_field_types = {
        'joint1_vel': 'double',
        'joint2_vel': 'double',
        'joint3_vel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint1_vel = kwargs.get('joint1_vel', float())
        self.joint2_vel = kwargs.get('joint2_vel', float())
        self.joint3_vel = kwargs.get('joint3_vel', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint1_vel != other.joint1_vel:
            return False
        if self.joint2_vel != other.joint2_vel:
            return False
        if self.joint3_vel != other.joint3_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint1_vel(self):
        """Message field 'joint1_vel'."""
        return self._joint1_vel

    @joint1_vel.setter
    def joint1_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint1_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint1_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint1_vel = value

    @builtins.property
    def joint2_vel(self):
        """Message field 'joint2_vel'."""
        return self._joint2_vel

    @joint2_vel.setter
    def joint2_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint2_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint2_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint2_vel = value

    @builtins.property
    def joint3_vel(self):
        """Message field 'joint3_vel'."""
        return self._joint3_vel

    @joint3_vel.setter
    def joint3_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint3_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint3_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint3_vel = value


class Metaclass_Ivel(type):
    """Metaclass of service 'Ivel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ikinterface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ikinterface.srv.Ivel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ivel

            from ikinterface.srv import _ivel
            if _ivel.Metaclass_Ivel_Request._TYPE_SUPPORT is None:
                _ivel.Metaclass_Ivel_Request.__import_type_support__()
            if _ivel.Metaclass_Ivel_Response._TYPE_SUPPORT is None:
                _ivel.Metaclass_Ivel_Response.__import_type_support__()


class Ivel(metaclass=Metaclass_Ivel):
    from ikinterface.srv._ivel import Ivel_Request as Request
    from ikinterface.srv._ivel import Ivel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
