!  Copyright (C) 2005 Free Software Foundation, Inc.
!  Contributed by Jakub Jelinek <jakub@redhat.com>.

!  This file is part of the GNU OpenMP Library (libgomp).

!  Libgomp is free software; you can redistribute it and/or modify it
!  under the terms of the GNU Lesser General Public License as published by
!  the Free Software Foundation; either version 2.1 of the License, or
!  (at your option) any later version.

!  Libgomp is distributed in the hope that it will be useful, but WITHOUT ANY
!  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
!  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
!  more details.

!  You should have received a copy of the GNU Lesser General Public License
!  along with libgomp; see the file COPYING.LIB.  If not, write to the
!  Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
!  MA 02110-1301, USA.  */

!  As a special exception, if you link this library with other files, some
!  of which are compiled with GCC, to produce an executable, this library
!  does not by itself cause the resulting executable to be covered by the
!  GNU General Public License.  This exception does not however invalidate
!  any other reasons why the executable file might be covered by the GNU
!  General Public License.

      module omp_lib_kinds
        integer, parameter :: omp_integer_kind = 4
        integer, parameter :: omp_logical_kind = 4
        integer, parameter :: omp_lock_kind = 4
        integer, parameter :: omp_nest_lock_kind = 8
      end module

      module omp_lib
        use omp_lib_kinds
        integer, parameter :: openmp_version = 200505

        interface
          subroutine omp_init_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (out) :: lock
          end subroutine omp_init_lock
        end interface

        interface
          subroutine omp_init_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (out) :: lock
          end subroutine omp_init_nest_lock
        end interface

        interface
          subroutine omp_destroy_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_destroy_lock
        end interface

        interface
          subroutine omp_destroy_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_destroy_nest_lock
        end interface

        interface
          subroutine omp_set_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_set_lock
        end interface

        interface
          subroutine omp_set_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_set_nest_lock
        end interface

        interface
          subroutine omp_unset_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_unset_lock
        end interface

        interface
          subroutine omp_unset_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_unset_nest_lock
        end interface

        interface omp_set_dynamic
          subroutine omp_set_dynamic (set)
            logical (4), intent (in) :: set
          end subroutine omp_set_dynamic
          subroutine omp_set_dynamic_8 (set)
            logical (8), intent (in) :: set
          end subroutine omp_set_dynamic_8
        end interface

        interface omp_set_nested
          subroutine omp_set_nested (set)
            logical (4), intent (in) :: set
          end subroutine omp_set_nested
          subroutine omp_set_nested_8 (set)
            logical (8), intent (in) :: set
          end subroutine omp_set_nested_8
        end interface

        interface omp_set_num_threads
          subroutine omp_set_num_threads (set)
            integer (4), intent (in) :: set
          end subroutine omp_set_num_threads
          subroutine omp_set_num_threads_8 (set)
            integer (8), intent (in) :: set
          end subroutine omp_set_num_threads_8
        end interface

        interface
          function omp_get_dynamic ()
            use omp_lib_kinds
            logical (omp_logical_kind) :: omp_get_dynamic
          end function omp_get_dynamic
        end interface

        interface
          function omp_get_nested ()
            use omp_lib_kinds
            logical (omp_logical_kind) :: omp_get_nested
          end function omp_get_nested
        end interface

        interface
          function omp_in_parallel ()
            use omp_lib_kinds
            logical (omp_logical_kind) :: omp_in_parallel
          end function omp_in_parallel
        end interface

        interface
          function omp_test_lock (lock)
            use omp_lib_kinds
            logical (omp_logical_kind) :: omp_test_lock
            integer (omp_lock_kind), intent (inout) :: lock
          end function omp_test_lock
        end interface

        interface
          function omp_get_max_threads ()
            use omp_lib_kinds
            integer (omp_integer_kind) :: omp_get_max_threads
          end function omp_get_max_threads
        end interface

        interface
          function omp_get_num_procs ()
            use omp_lib_kinds
            integer (omp_integer_kind) :: omp_get_num_procs
          end function omp_get_num_procs
        end interface

        interface
          function omp_get_num_threads ()
            use omp_lib_kinds
            integer (omp_integer_kind) :: omp_get_num_threads
          end function omp_get_num_threads
        end interface

        interface
          function omp_get_thread_num ()
            use omp_lib_kinds
            integer (omp_integer_kind) :: omp_get_thread_num
          end function omp_get_thread_num
        end interface

        interface
          function omp_test_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_integer_kind) :: omp_test_nest_lock
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end function omp_test_nest_lock
        end interface

        interface
          function omp_get_wtick ()
            double precision :: omp_get_wtick
          end function omp_get_wtick
        end interface

        interface
          function omp_get_wtime ()
            double precision :: omp_get_wtime
          end function omp_get_wtime
        end interface

      end module omp_lib
